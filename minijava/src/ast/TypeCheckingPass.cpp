#include "ast/TypeCheckingPass.h"
#include "logger/Logger.h"

namespace ast {
    

TypeCheckingPass::TypeCheckingPass(SymbolTable& symbolTable, TypesTable& typesTable)
: 
symbolTable(symbolTable), 
typesTable(typesTable),
isConditionBoolean(false),
isNodeBeforeAllocatingMemory(false),
overwriteFunCall(false)
{
    fillSupertypeMap();
}

void TypeCheckingPass::fillSupertypeMap() {
    const auto& map = typesTable.getTypesTable();
    for(const auto& kv: map) {
        const auto& classOpt = symbolTable.retrieveClass(kv.first);
        if (!classOpt.has_value())   // if it is indeed a class
        {
            continue;
        }

        auto parrentId = classOpt.value().parrrentClassId;
        if (parrentId == -1)    // it does not have a supertype
        {
            continue;  
        }

        auto _class = kv.first;
        const auto& parentClassOpt = symbolTable.retrieveClass(parrentId);
        if (!parentClassOpt.has_value())    // could not find the parent, weird..
        {
            continue;
        }
        auto _parentClass = parentClassOpt.value().className;
        auto classAndParentPair = std::pair<std::string, std::string>(_class, _parentClass);
        superTypeMap.insert(classAndParentPair);   
    }
}

inline bool ends_with(std::string const & value, std::string const & ending)
{
    if (ending.size() > value.size()) return false;
    return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}

bool TypeCheckingPass::isLeftTypeSuperTypeOrNot(const std::string& lhs, const std::string& rhs) const
{
    // check if lhs is supertype of rhs
    auto superTIterator = superTypeMap.find(rhs);
    if (superTIterator != superTypeMap.end()) 
    {
        auto superType = *superTIterator;
        if (superType.second == lhs)
        {
            return true;
        }
    }

    return lhs == rhs;
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

    if (identifier.size() > 0 && identifier[0] == '"')
    {
        return "";
    }

    if (identifier == "true" || identifier == "false")
    {
        return "boolean";
    }

    if (identifier == "length") {
        return "int";
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
    assert(node->jjtGetNumChildren() >= 3);

    node->jjtGetChild(0)->jjtAccept(this, data);
    std::string returnType = returnValue;
    node->jjtGetChild(1)->jjtAccept(this, data);
    std::string identifier = returnValue;
    currentMethod = identifier;

    return visitChildren(node, data, 2);
}

void* TypeCheckingPass::visit(const ASTMethodIDNode *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTArgsList *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTArrayDeclNode *node, void* data) {
    visitChildren(node, data);
    if (!ends_with(currentExpType, "[]"))
    {
        currentExpType += "[]";
    }
    return data;
}

void* TypeCheckingPass::visit(const ASTSimpleTypeNode *node, void* data) {
    currentExpType = node->toString();
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
    logger::log(logger::log_level::Info, "Cond boolean for if: " + false_or_true);
    if (!isConditionBoolean) {
        std::string message = "Condition for if statement is not a boolean!!!";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    isConditionBoolean = false;
    return visitChildren(node, data, 1);
}

void* TypeCheckingPass::visit(const ASTWhileStatement *node, void* data) {
    assert(node->jjtGetNumChildren() >= 1);
    node->jjtGetChild(0)->jjtAccept(this, data);
    std::string false_or_true = isConditionBoolean ? "true": "false";
    logger::log(logger::log_level::Info, "Cond boolean for while: " + false_or_true);
    if (!isConditionBoolean) {
        std::string message = "Condition for while statement is not a boolean!!!";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    isConditionBoolean = false;
    return visitChildren(node, data, 1);
}

void* TypeCheckingPass::visit(const ASTPrintStatement *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTOptionalExprStmt *node, void* data) {
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTAssignNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);

    node->jjtGetChild(0)->jjtAccept(this, data);
    auto lhsType = currentExpType;

    node->jjtGetChild(1)->jjtAccept(this, data);
    auto rhsType = currentExpType;

    if(!isLeftTypeSuperTypeOrNot(lhsType, rhsType))
    {
        std::string message = "Lhs: " + lhsType + " is not the same or supertype of: " + rhsType;
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    return visitChildren(node, data, 2);
}

void* TypeCheckingPass::visit(const ASTOrNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);

    node->jjtGetChild(0)->jjtAccept(this, data);
    auto lhsType = currentExpType;

    node->jjtGetChild(1)->jjtAccept(this, data);
    auto rhsType = currentExpType;

    if(!isLeftTypeSuperTypeOrNot(lhsType, rhsType))
    {
        std::string message = "Can't compare type: <" + lhsType + "> with type: <" + rhsType + ">"; 
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    visitChildren(node, data, 2);
    isConditionBoolean = true;
    currentExpType = "boolean";
    return data;
}

void* TypeCheckingPass::visit(const ASTAndNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);

    node->jjtGetChild(0)->jjtAccept(this, data);
    auto lhsType = currentExpType;

    node->jjtGetChild(1)->jjtAccept(this, data);
    auto rhsType = currentExpType;

    if(!isLeftTypeSuperTypeOrNot(lhsType, rhsType))
    {
        std::string message = "Can't compare type: <" + lhsType + "> with type: <" + rhsType + ">"; 
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    visitChildren(node, data, 2);
    isConditionBoolean = true;
    currentExpType = "boolean";
    return data;
}

void* TypeCheckingPass::visit(const ASTEqualNotEqualNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);

    node->jjtGetChild(0)->jjtAccept(this, data);
    auto lhsType = currentExpType;

    node->jjtGetChild(1)->jjtAccept(this, data);
    auto rhsType = currentExpType;

    if(!isLeftTypeSuperTypeOrNot(lhsType, rhsType))
    {
        std::string message = "Can't compare type: <" + lhsType + "> with type: <" + rhsType + ">"; 
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    visitChildren(node, data, 2);
    isConditionBoolean = true;
    currentExpType = "boolean";
    return data;
}

void* TypeCheckingPass::visit(const ASTRelationalNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);

    node->jjtGetChild(0)->jjtAccept(this, data);
    auto lhsType = currentExpType;

    node->jjtGetChild(1)->jjtAccept(this, data);
    auto rhsType = currentExpType;

    if(!isLeftTypeSuperTypeOrNot(lhsType, rhsType))
    {
        std::string message = "Can't compare type: <" + lhsType + "> with type: <" + rhsType + ">"; 
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    visitChildren(node, data, 2);
    isConditionBoolean = true;
    currentExpType = "boolean";
    return data;
}

void* TypeCheckingPass::visit(const ASTAdditiveNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);
    node->jjtGetChild(0)->jjtAccept(this, data);
    auto lhsType = currentExpType;

    node->jjtGetChild(1)->jjtAccept(this, data);
    auto rhsType = currentExpType;

    if(!isLeftTypeSuperTypeOrNot(lhsType, rhsType))
    {
        std::string message = "Trying to add/substract type: " + lhsType + " with the following type: " + rhsType + " is not a valid operation";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    return visitChildren(node, data, 2);
}

void* TypeCheckingPass::visit(const ASTMultiplicativeNode *node, void* data) {
    assert(node->jjtGetNumChildren() == 2);
    node->jjtGetChild(0)->jjtAccept(this, data);
    auto lhsType = currentExpType;

    node->jjtGetChild(1)->jjtAccept(this, data);
    auto rhsType = currentExpType;

    if(!isLeftTypeSuperTypeOrNot(lhsType, rhsType))
    {
        std::string message = "Trying to mul/div type: " + lhsType + " with the following type: " + rhsType + " is not a valid operation";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    return visitChildren(node, data, 2);
}

void* TypeCheckingPass::visit(const ASTUnaryNode *node, void* data) {
    visitChildren(node, data);
    isConditionBoolean = true;
    currentExpType = "boolean";
    return data;
}

void* TypeCheckingPass::visit(const ASTLiteralNode *node, void* data) {
    auto valueAsString = node->toString();
    if (valueAsString == "true" || valueAsString == "false" || valueAsString == "boolean")
    {
        currentExpType = "boolean";
    }
    else {
        currentExpType = "int";
    }
    return visitChildren(node, data, 1);
}

void* TypeCheckingPass::visit(const ASTIdentifier *node, void* data) {
    std::string identifier = node->toString();
    returnValue = identifier;
    logger::log(logger::log_level::Info, "Identifier is: " + identifier);
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
    auto returnVal = returnValue;
    logger::log(logger::log_level::Info, "ID: " + returnVal + " & Type of IDENTIFIER: " + currentExpType);
    logger::log(logger::log_level::Info, "Class: " + currentClassName + " & method: " + currentMethod);
    visitChildren(node, data, 1);

    currentExpType = identifierType;
    
    // look for identifier in the st && check if it is a condition or not
    if (identifierType == "boolean") {
        isConditionBoolean = true;
    } 
    else {
        isConditionBoolean = false;
    }

    functionCalled = returnVal;
    return data;
}

void* TypeCheckingPass::visit(const ASTAccessArray *node, void* data)
{
    auto arrayType = currentExpType;
    logger::log(logger::log_level::Error, "Array type before access of children: <" + arrayType + ">");
    if (!ends_with(arrayType, "[]"))
    {
        auto message = "We are trying to access a type that is not an array: (type): <" + arrayType + ">";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    assert(node->jjtGetNumChildren() != 0);
    node->jjtGetChild(0)->jjtAccept(this, data);

    if(currentExpType != "int")
    {
        auto message = "Only way to access an array is using an integer, can't use type: <" + currentExpType + ">";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }
    
    visitChildren(node, data, 1);
    
    if (ends_with(arrayType, "[]") )
    {
        currentExpType = arrayType.substr(0, arrayType.length() - std::string("[]").length());
    }
    auto message = "Type of current expression is: <" + currentExpType + ">" + " and arrayType: <" + arrayType + ">";
    logger::log(logger::log_level::Error, message);
    return data;
}

void* TypeCheckingPass::visit(const ASTPrimaryExpNode *node, void* data)
{
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTFunCall *node, void* data)
{
    auto previousFieldName = returnValue;
    auto previousType = currentExpType;
    assert(node->jjtGetNumChildren() != 0);
    node->jjtGetChild(0)->jjtAccept(this, data);
    auto fieldName = returnValue;

    auto message = "Field: <" + fieldName + "> and old field:<" + previousType + ">";
    logger::log(logger::log_level::Info, message);

    if (overwriteFunCall)
    {
        currentExpType = "int";
        overwriteFunCall = false;
    }
    return data;

    std::string clazName = currentClassName;
    if (typesTable.isClass(previousType))
    {
        clazName = previousType;
    }
    auto memberInfoOpt = symbolTable.retrieveMember(fieldName, clazName);

    if (!memberInfoOpt.has_value())
    {
        auto message = "Field with name: <" + fieldName + "> has not been defined & current type is: <" + currentExpType +">";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    if(memberInfoOpt.value().memberType == MemberTable::MemberType::METHOD)
    {
        auto message = "There is no sense calling a method on \' this \' object";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }


    currentExpType = memberInfoOpt.value().returnType;
    return data;
}

void* TypeCheckingPass::visit(const ASTFunArgs *node, void* data)
{
     auto memberInfoOpt = symbolTable.retrieveMember(functionCalled, currentClassName);
    if (!memberInfoOpt.has_value())
    {
        auto message = "Function with name: " + functionCalled + "has not been defined";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    if(memberInfoOpt.value().memberType == MemberTable::MemberType::FIELD)
    {
        auto message = functionCalled + " is a field, not a method!!!";
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    // get a list of parameters types
    std::vector<std::string> paramsTypes;
    const auto paramTable = symbolTable.retrieveParamTable(currentClassName, functionCalled);
    if (paramTable.has_value())
    {
        for(const auto& param: paramTable.value().params)
        {
            paramsTypes.push_back(param.paramType);
        }
    }
    auto numChildren = node->jjtGetNumChildren();

    if (numChildren != paramsTypes.size())
    {
        std::string message;
        if (numChildren < paramsTypes.size())
        {
            message = "Not enough parameters have been entered in order to call function: " + functionCalled;
        }
        else {
            message = "Too many parameters have been entered in order to call function: " + functionCalled;
        }
        logger::log(logger::log_level::Error, message);
        throw std::runtime_error(message);
    }

    for (int cIdx = 0 ; cIdx < numChildren; ++cIdx)
    {
        node->jjtGetChild(cIdx)->jjtAccept(this, data);
        logger::log(logger::log_level::Error, "Functions param: " + paramsTypes.at(cIdx) + " and given: " + currentExpType + " with name: " + returnValue);
        if (currentExpType != paramsTypes.at(cIdx))
        {
            auto message = "Given parameters with type: <" + currentExpType + "> does not match function's parameters type: <" + paramsTypes.at(cIdx) + ">";
            logger::log(logger::log_level::Error, message);
            throw std::runtime_error(message);
        }
    }

    currentExpType = memberInfoOpt.value().returnType;
    return data;
}

void* TypeCheckingPass::visit(const ASTAccessLength *node, void* data)
{
    currentExpType = "int";
    overwriteFunCall = true;
    return visitChildren(node, data);
}

void* TypeCheckingPass::visit(const ASTAllocateIdentifier *node, void* data)
{
    auto initialType = currentExpType;
    visitChildren(node, data);
    // it will be replaced by the values in (...), but we need the immediate type
    // after new, eg. new DummyClass(5) -> we should return DummyClass and not int!!
    currentExpType = initialType;
    return data;
}

void* TypeCheckingPass::visit(const ASTAllocateArray *node, void* data)
{
    isNodeBeforeAllocatingMemory = true;
    if (!ends_with(currentExpType, "[]"))
    {
        currentExpType += "[]";
    }
    visitChildren(node, data);
    return data;
}
}  // namespace ast