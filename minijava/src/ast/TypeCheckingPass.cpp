#include "ast/TypeCheckingPass.h"
#include "logger/Logger.h"

namespace ast {
    

TypeCheckingPass::TypeCheckingPass(SymbolTable& symbolTable, TypesTable& typesTable)
: 
symbolTable(symbolTable), 
typesTable(typesTable),
isConditionBoolean(false)
{
}

std::string TypeCheckingPass::getIdentifierType(const std::string& identifier)
{
    // watch in formal params
    auto optParamInfo = symbolTable.retrieveParam(identifier, currentClassName, currentMethod);
    if (optParamInfo.has_value())
    {
        return optParamInfo.value().paramType;
    }

    // watch in local vars
    auto optLocalVarInfo = symbolTable.retrieveLocalVar(identifier, currentClassName, currentMethod);
    if (optLocalVarInfo.has_value())
    {
        return optLocalVarInfo.value().varType;
    }

    // watch in members
    auto optMemberInfo = symbolTable.retrieveMember(identifier, currentClassName);
    if (optMemberInfo.has_value())
    {
        auto member = optMemberInfo.value();
        if (member.memberType == MemberTable::MemberType::FIELD) {
            return member.returnType;
        }
        else {
            return "";
        }
    }

    // watch in parent class
    auto optClassInfo = symbolTable.retrieveClass(currentClassName);
    if (optClassInfo.has_value())
    {
        auto parentId = optClassInfo.value().parrrentClassId;
        while(parentId != -1)
        {
            auto optParentClassInfo = symbolTable.retrieveClass(parentId);
            if (optParentClassInfo.has_value())
            {
                auto optParentMemberInfo = symbolTable.retrieveMember(identifier, optParentClassInfo.value().className);
                if (optParentMemberInfo.has_value())
                {
                    auto member = optParentMemberInfo.value();
                    if (member.memberType == MemberTable::MemberType::FIELD) {
                        return member.returnType;
                    }
                    else {
                        return "";
                    }
                }
                parentId = optParentClassInfo.value().parrrentClassId;
            }
            else
            {
                break;
            }
        }
    }

    // if it is a number, it is ok
    auto is_number = [](const std::string& s) -> bool {
        return !s.empty() && std::find_if(s.begin(), 
            s.end(), [](unsigned char c) { 
                return !std::isdigit(c); 
            }) == s.end();
    };
    if (is_number(identifier))
    {
        return "";
    }

    // if it is a string literal, it is ok
    if (identifier.size() > 0 && identifier[0] == '"')
    {
        return "";
    }

    // if it is a boolean literal, it is ok
    if (identifier == "true" || identifier == "false")
    {
        return "boolean";
    }

    return "";
}

void* TypeCheckingPass::visitChildren(const SimpleNode* node, void* data, const std::size_t& start/* = 0*/)
{
    for (int i = start; i < node->jjtGetNumChildren(); i++)
    {
        node->jjtGetChild(i)->jjtAccept(this, data);
    }
    return data;
}

void* TypeCheckingPass::visit(const SimpleNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTRoot *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTMainClass *node, void* data) {
    visitChildren(node, data);
    return data;
}

void* TypeCheckingPass::visit(const ASTClassDecl *node, void* data) {
    node->jjtGetChild(0)->jjtAccept(this, data);
    std::string className = returnValue;
    currentClassName = className;
    visitChildren(node, data, 1);
    return data;
}

void* TypeCheckingPass::visit(const ASTVarDecl *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTMethodDeclNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTMethodIDNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTArgsList *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTArrayDeclNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTSimpleTypeNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTBlockStatementNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTReturnStatementNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTIfStatementNode *node, void* data) {
    assert(node->jjtGetNumChildren() >= 1);
    node->jjtGetChild(0)->jjtAccept(this, data);
    std::string false_or_true = isConditionBoolean ? "true": "false";
    logger::log(logger::log_level::Info, "Cond boolean: " + false_or_true);
    if (!isConditionBoolean) {
        std::string message = "Condition is not a boolean!!!";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    isConditionBoolean = false;
    return visitChildren(node, data, 1);
}

void* TypeCheckingPass::visit(const ASTWhileStatement *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTPrintStatement *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTOptionalExprStmt *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTAssignNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTOrNode *node, void* data) {
    visitChildren(node, data);
    isConditionBoolean = true;
    return data;
}

void* TypeCheckingPass::visit(const ASTAndNode *node, void* data) {
    visitChildren(node, data);
    isConditionBoolean = true;
    return data;
}

void* TypeCheckingPass::visit(const ASTEqualNotEqualNode *node, void* data) {
    visitChildren(node, data);
    isConditionBoolean = true;
    return data;
}

void* TypeCheckingPass::visit(const ASTRelationalNode *node, void* data) {
    visitChildren(node, data);
    isConditionBoolean = true;
    return data;
}

void* TypeCheckingPass::visit(const ASTAdditiveNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTMultiplicativeNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTUnaryNode *node, void* data) {
    visitChildren(node, data);
    isConditionBoolean = true;
    return data;
}

void* TypeCheckingPass::visit(const ASTLiteralNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTIdentifier *node, void* data) {
    std::string identifier = node->toString();
    returnValue = identifier;
    return data;
}

void* TypeCheckingPass::visit(const ASTTypeNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTInheritance *node, void* data) {
    assert(node->jjtGetNumChildren() != 0);
    node->jjtGetChild(0)->jjtAccept(this, data);
    auto parentClass = returnValue;
    logger::log(logger::log_level::Info, "Parent class is " + parentClass);

    auto optClassInfo = symbolTable.retrieveClass(currentClassName);
    if (optClassInfo.has_value())
    {
        // check if we already have a parent class
        if (optClassInfo.value().parrrentClassId != -1)
        {
            logger::log(logger::log_level::Error, "Class " + currentClassName + " already has a parent class");
            throw std::runtime_error("Class " + currentClassName + " already has a parent class");
        }

        // find the parent class id
        auto optParentClassInfo = symbolTable.retrieveClass(parentClass);
        if (optParentClassInfo.has_value())
        {
            auto parentId = optParentClassInfo.value().classId;
            auto parentIdCopy = parentId;

            // check for circular inheritance
            bool bHasParent = true;
            while(bHasParent)
            {
                if (parentIdCopy == -1)
                {
                    bHasParent = false;
                    break;
                }

                auto parentOfParent = symbolTable.retrieveClass(parentIdCopy);
                if(parentOfParent.has_value())
                {
                    if(parentOfParent.value().className == currentClassName)
                    {
                        std::string message = "Circular inheritance detected: " + currentClassName + " and " + parentClass + " are in a circular inheritance";
                        logger::log(logger::log_level::Error, message);
                        throw std::runtime_error(message);
                    }
                    parentIdCopy = parentOfParent.value().parrrentClassId;
                }
                else
                {
                    bHasParent = false;
                }
            }

            logger::log(logger::log_level::Info, "Adding inheritance " + parentClass + " to class " + currentClassName + " with id " + std::to_string(parentId));
            optClassInfo.value().parrrentClassId = parentId;
            symbolTable.updateClass(optClassInfo.value());
        }
        else
        {
            logger::log(logger::log_level::Error, "Parent class " + parentClass + " not found");
            throw std::runtime_error("Parent class " + parentClass + " not found");
        }
    }
    else
    {
        logger::log(logger::log_level::Error, "Class " + currentClassName + " not found");
        throw std::runtime_error("Class " + currentClassName + " not found");
    }
    return data;
}

void* TypeCheckingPass::visit(const ASTAccessIdentifier *node, void* data) {
    assert(node->jjtGetNumChildren() != 0);
    node->jjtGetChild(0)->jjtAccept(this, data);

    auto identifierType = getIdentifierType(returnValue);
    visitChildren(node, data, 1);

    // look for identifier in the st && check if it is a condition or not
    if (identifierType == "boolean") {
        isConditionBoolean = true;
    } 
    else {
        isConditionBoolean = false;
    }

    return data;
}

}  // namespace ast