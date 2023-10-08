#include "ast/BindingVisitor.h"

#include "logger/Logger.h"

namespace ast {

BindingVisitor::BindingVisitor(SymbolTable& symbolTable, TypesTable& typesTable) 
: 
symbolTable(symbolTable),
typesTable(typesTable) 
{}

void BindingVisitor::printSymbolTable() const {
    symbolTable.printSymbolTable();
}

void* BindingVisitor::visitChildrenNodes(const Node*node, void* data, size_t start)
{
    for (int i = start; i < node->jjtGetNumChildren(); i++)
    {
        node->jjtGetChild(i)->jjtAccept(this, data);
    }
    return data;    
}


void* BindingVisitor::visit(const SimpleNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTRoot *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTMainClass *node, void* data) {
    currentClassName = node->toString();
    logger::log(logger::log_level::Info, "Adding class " + currentClassName);
    symbolTable.addClass(currentClassName);
    return data;
}

void* BindingVisitor::visit(const ASTClassDecl *node, void* data) {
    // first child(the ID) is the class name
    node->jjtGetChild(0)->jjtAccept(this, data);
    std::string className = returnValue;
    // add a new type to the types table
    symbolTable.typesTable.addType(std::make_pair(className, symbolTable.getCurrentClassId()));
    currentClassName = className;
    currentMemberName = "";

    logger::log(logger::log_level::Info, "Adding class " + currentClassName);
    symbolTable.addClass(currentClassName);

    visitChildrenNodes(node, data, 1);
    return data;
}

void* BindingVisitor::visit(const ASTVarDecl *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);
    node->jjtGetChild(0)->jjtAccept(this, data);
    std::string type = returnValue;
    node->jjtGetChild(1)->jjtAccept(this, data);
    std::string identifier = returnValue;

    logger::log(logger::log_level::Info, "Adding member " + identifier + " of type " + type + " to class " + currentClassName);
    
    if(currentMemberName.empty())
    {
        // it means that we just got into a class and we are adding a field
        symbolTable.addMember(std::make_pair(type, identifier), MemberTable::MemberType::FIELD, type, currentClassName);
    }
    else
    {
        // it means that we are adding a local variable to a method
        symbolTable.addLocalVar(std::make_pair(type, identifier), currentClassName, currentMemberName);
    }
    
    return data;
}

void* BindingVisitor::visit(const ASTMethodDeclNode *node, void* data) {
    assert(node->jjtGetNumChildren() >= 3);

    node->jjtGetChild(0)->jjtAccept(this, data);
    std::string returnType = returnValue;
    node->jjtGetChild(1)->jjtAccept(this, data);
    std::string identifier = returnValue;
    currentMemberName = identifier;

    logger::log(logger::log_level::Info, "Adding method " + identifier + " of return type " + returnType + " to class " + currentClassName);
    symbolTable.addMember(std::make_pair(returnType, identifier), MemberTable::MemberType::METHOD, returnType, currentClassName);

    node->jjtGetChild(2)->jjtAccept(this, data);
    std::string argsList = returnValue;

    logger::log(logger::log_level::Info, "Adding method params " + argsList + " to method " + identifier + " of class " + currentClassName);

    return visitChildrenNodes(node, data, 3);
}

void* BindingVisitor::visit(const ASTMethodIDNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 1);
    node->jjtGetChild(0)->jjtAccept(this, data);
    logger::log(logger::log_level::Info, "Found method identifier: " + returnValue);
    return data;
}

void* BindingVisitor::visit(const ASTArgsList *node, void* data) {
    std::string argsList = "(";
    assert(node->jjtGetNumChildren() % 2 == 0);
    for(int i = 0; i < node->jjtGetNumChildren(); i += 2)
    {
        node->jjtGetChild(i)->jjtAccept(this, data);
        std::string type = returnValue;
        node->jjtGetChild(i + 1)->jjtAccept(this, data);
        std::string identifier = returnValue;

        logger::log(logger::log_level::Info, "Adding param " + identifier + " of type " + type + " to method " + currentMemberName + " of class " + currentClassName);
        symbolTable.addParam(std::make_pair(type, identifier), currentClassName, currentMemberName);
        argsList += type + " " + identifier;
        if(i != node->jjtGetNumChildren() - 2)
        {
            argsList += ", ";
        }
    }
    argsList += ")";
    returnValue = argsList;
    return data;
}

void* BindingVisitor::visit(const ASTArrayDeclNode *node, void* data) {
    std::string arrayDecl = "[]";
    logger::log(logger::log_level::Info, "Adding array declaration " + arrayDecl);
    returnValue = arrayDecl;
    return data;
}

void* BindingVisitor::visit(const ASTSimpleTypeNode *node, void* data) {
    auto type = node->toString();
    returnValue = type;
    return data;
}

void* BindingVisitor::visit(const ASTBlockStatementNode *node, void* data) {
    std::string currentClassCopy = currentClassName;
    std::string currentMemberCopy = currentMemberName;
    symbolTable.beginScope(currentClassCopy, currentMemberCopy);
    for(int i = 0; i < node->jjtGetNumChildren(); i++)
    {
        node->jjtGetChild(i)->jjtAccept(this, data);
    }
    symbolTable.endScope(currentClassCopy, currentMemberCopy);
    return data;
}

void* BindingVisitor::visit(const ASTReturnStatementNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTIfStatementNode *node, void* data) {
    std::string currentClassCopy = currentClassName;
    std::string currentMemberCopy = currentMemberName;
    symbolTable.beginScope(currentClassCopy, currentMemberCopy);
    for(int i = 0; i < node->jjtGetNumChildren(); i++)
    {
        node->jjtGetChild(i)->jjtAccept(this, data);
    }
    symbolTable.endScope(currentClassCopy, currentMemberCopy);
    return data;
}

void* BindingVisitor::visit(const ASTWhileStatement *node, void* data) {
    std::string currentClassCopy = currentClassName;
    std::string currentMemberCopy = currentMemberName;
    symbolTable.beginScope(currentClassCopy, currentMemberCopy);
    for(int i = 0; i < node->jjtGetNumChildren(); i++)
    {
        node->jjtGetChild(i)->jjtAccept(this, data);
    }
    symbolTable.endScope(currentClassCopy, currentMemberCopy);
    return data;
}

void* BindingVisitor::visit(const ASTPrintStatement *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTOptionalExprStmt *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTAssignNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTOrNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTAndNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTEqualNotEqualNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTRelationalNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTAdditiveNode *node, void* data) {
    for (int i = 0; i < node->jjtGetNumChildren(); i++)
    {
        node->jjtGetChild(i)->jjtAccept(this, data);
    }
    return data;
}

void* BindingVisitor::visit(const ASTMultiplicativeNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTUnaryNode *node, void* data) {
    return visitChildrenNodes(node, data);
}

void* BindingVisitor::visit(const ASTLiteralNode *node, void* data) {
    std::string literal = node->toString();
    logger::log(logger::log_level::Info, "Adding literal " + literal);
    returnValue = literal;
    return data;
}

void* BindingVisitor::visit(const ASTIdentifier *node, void* data) {
    std::string identifier = node->toString();
    logger::log(logger::log_level::Info, "Adding identifier " + identifier);
    returnValue = identifier;
    return data;
}

void* BindingVisitor::visit(const ASTTypeNode *node, void* data) {
    if( node->jjtGetNumChildren() == 1)
    {
        node->jjtGetChild(0)->jjtAccept(this, data);
        return data;
    }

    node->jjtGetChild(0)->jjtAccept(this, data);
    auto type = returnValue;
    node->jjtGetChild(1)->jjtAccept(this, data);
    auto arrayDecl = returnValue;

    returnValue = type + arrayDecl;
    return data;
}



}   // namespace ast