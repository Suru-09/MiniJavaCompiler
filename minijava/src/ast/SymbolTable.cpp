#include "ast/SymbolTable.h"

#include <tabulate/table.hpp>
#include "logger/Logger.h"

namespace ast {

/**
 * @brief SymbolTable class
 */

SymbolTable::SymbolTable(TypesTable& typesTable) 
: 
classTable(ClassTable(typesTable)),
typesTable(typesTable)
{

}

SymbolTable::~SymbolTable() 
{}

void SymbolTable::addClass(const std::string& className) {
    if (!classTable.has_value()) {
        throw  std::runtime_error("Class table is not defined");
    }
    classTable.value().addClass(className);
}

void SymbolTable::addMember(const std::pair<std::string, std::string>& member, const MemberTable::MemberType& memberType, 
const std::string& returnType, const std::string& currentClassName) 
{
    auto [memberReturnType, memberName] = member;

    if(!returnType.empty()) {
        memberReturnType = returnType;
    }

    if (!classTable.has_value()) {
        throw std::runtime_error("Class is not defined");
    }
    classTable.value().addMember(MemberTable::MemberInfo{memberType, memberReturnType, memberName, 0, 
    LocalVarTable(typesTable), FormalParamTable(typesTable) }
    , currentClassName);
}

void SymbolTable::addParam(const std::pair<std::string, std::string>& param
, const std::string& currentClassName, const std::string& currentMemberName) 
{
    if (!classTable.has_value()) {
        throw std::runtime_error("Class is not defined");
    }
    classTable.value().addParam(param, currentClassName, currentMemberName);
}

void SymbolTable::addLocalVar(const std::pair<std::string, std::string>& var
, const std::string& currentClassName, const std::string& currentMemberName) 
{
    if (!classTable.has_value()) {
        throw std::runtime_error("Class is not defined");
    }
    classTable.value().addLocalVar(var, currentClassName, currentMemberName);
}

void SymbolTable::printSymbolTable() const 
{
    if(!classTable.has_value()) {
        throw std::runtime_error("Class table is not defined");
    }

    classTable.value().printClassTable();
    typesTable.printTypesTable();
}

/**
 * @brief ClassTable class
 */

ClassTable::ClassTable(TypesTable& typesTable)
:
typesTable(typesTable),
currentClassId(0)
{
    // Object class is always present
    classes.push_back({"Object", -1});
}

ClassTable::~ClassTable() {}

void ClassTable::addClass(const std::string& className) {
    // if class is already defined, throw an error
    if (isClassDefined(className)) {
        throw std::runtime_error("Class " + className + " is already defined");
    }
    classes.push_back(ClassInfo{className, currentClassId, MemberTable(typesTable)});
    currentClassId++;
}

bool ClassTable::isClassDefined(const std::string& className) const {
    for (const auto& classInfo : classes) {
        if (classInfo.className == className) {
            return true;
        }
    }
    return false;
}

void ClassTable::addMember(MemberTable::MemberInfo memberInfo, const std::string& className) {
    // if class is not defined, throw an error
    if (!isClassDefined(className)) {
        throw std::runtime_error("Class " + className + " is not defined");
    }
    for (auto& classInfo : classes) {
        if (classInfo.className == className) {
            if (!classInfo.memberTable.has_value()) {
                throw std::runtime_error("Member table is not defined for class " + className);
            }

            classInfo.memberTable.value().addMember(
                std::make_pair(memberInfo.returnType, memberInfo.memberName), memberInfo.memberType, memberInfo.returnType
            );
        }
    }
}

void ClassTable::addParam(const std::pair<std::string, std::string>& param, const std::string& className, const std::string& memberName) {
    // if class is not defined, throw an error
    if (!isClassDefined(className)) {
        throw std::runtime_error("Class " + className + " is not defined");
    }
    for (auto& classInfo : classes) {
        if (classInfo.className == className) {
            if (!classInfo.memberTable.has_value()) {
                throw std::runtime_error("Member table is not defined");
            }
            classInfo.memberTable.value().addParam(param, memberName);
        }
    }
}

void ClassTable::addLocalVar(const std::pair<std::string, std::string>& var, const std::string& className, const std::string& memberName) {
    // if class is not defined, throw an error
    if (!isClassDefined(className)) {
        throw std::runtime_error("Class " + className + " is not defined");
    }
    for (auto& classInfo : classes) {
        if (classInfo.className == className) {
            if (!classInfo.memberTable.has_value()) {
                throw std::runtime_error("Member table is not defined");
            }
            classInfo.memberTable.value().addLocalVar(var, memberName);
        }
    }
}

void ClassTable::printClassTable() const {
    tabulate::Table classTabulate;
    classTabulate.add_row({"Class", "Class ID"});
    for (const auto& classInfo : classes) {
        classTabulate.add_row({classInfo.className, std::to_string(classInfo.classId)});
    }
    std::cout << classTabulate << std::endl;

    for (const auto& classInfo : classes) {
        if (classInfo.memberTable.has_value()) {
            logger::log(logger::log_level::Info, "Printing member table for class " + classInfo.className);
            classInfo.memberTable.value().printMemberTable();
        }
    }
}

/**
 * @brief MemberTable class
 */

MemberTable::MemberTable(TypesTable& typesTable)
:
typesTable(typesTable),
currentMemberId(0)
{

}

MemberTable::~MemberTable() {}

void MemberTable::addMember(const std::pair<std::string, std::string>& member, const MemberType& memberType, const std::string& returnType) {
    // if (isMemberDefined(member.first)) {
    //     throw std::runtime_error("Member " + member.first + " is already defined");
    // }

    if (memberType == MemberType::METHOD && returnType == "") {
        throw std::runtime_error("Method " + member.first + " must have a return type");
    }

    if(memberType == MemberType::METHOD && !typesTable.isTypeDefined(returnType)) {
        throw std::runtime_error("Return type " + returnType + " is not defined");
    }

    std::string localReturnType = returnType;
    if(!returnType.empty()) {
        localReturnType = returnType;
    }
    else
    {
        localReturnType = member.first;
    }

    logger::log(logger::log_level::Info, "Return type " + localReturnType + " for member " + member.second);

    if(memberType == MemberType::METHOD) {
        members.push_back(MemberInfo{memberType, localReturnType, member.second, currentMemberId, LocalVarTable(typesTable), FormalParamTable(typesTable)});
    }
    else {
        members.push_back(MemberInfo{memberType, localReturnType, member.second, currentMemberId, LocalVarTable(typesTable), FormalParamTable(typesTable)});
    }
    
    currentMemberId++;
}

void MemberTable::addParam(const std::pair<std::string, std::string>& param, const std::string& memberName) {
    // if member is not defined, throw an error
    if (!isMemberDefined(memberName)) {
        throw std::runtime_error("Member " + memberName + " is not defined");
    }
    for (auto& memberInfo : members) {
        if (memberInfo.memberName == memberName) {
            if (!memberInfo.formalParamTable.has_value()) {
                throw std::runtime_error("Formal param table is not defined");
            }
            memberInfo.formalParamTable.value().addParam(param);
        }
    }
}

void MemberTable::addLocalVar(const std::pair<std::string, std::string>& var, const std::string& memberName) {
    // if member is not defined, throw an error
    if (!isMemberDefined(memberName)) {
        throw std::runtime_error("Member " + memberName + " is not defined");
    }
    for (auto& memberInfo : members) {
        if (memberInfo.memberName == memberName) {
            if (!memberInfo.localVarTable.has_value()) {
                throw std::runtime_error("Local var table is not defined");
            }
            memberInfo.localVarTable.value().addLocalVar(var);
        }
    }
}

bool MemberTable::isMemberDefined(const std::string& member) const {
    for (const auto& memberInfo : members) {
        if (memberInfo.memberName == member) {
            return true;
        }
    }
    return false;
}

void MemberTable::printMemberTable() const {
    tabulate::Table memberTabulate;
    memberTabulate.add_row({"Return Type/ Field Type", "Member", "Member ID", "Member Type"});

    for (const auto& member : members) {
        std::string memberType = member.memberType == MemberType::FIELD ? "FIELD" : "METHOD";
        memberTabulate.add_row({member.returnType, member.memberName, std::to_string(member.memberId), memberType});
    }
    if(!members.empty())
    {
        std::cout << memberTabulate << std::endl;
    }

    for (const auto& member : members) {
        if (member.localVarTable.has_value() && member.memberType == MemberType::METHOD) {
            logger::log(logger::log_level::Info, "Printing local var table for member " + member.memberName);
            member.localVarTable.value().printLocalVarTable();
        }

        if (member.formalParamTable.has_value() && member.memberType == MemberType::METHOD) {
            logger::log(logger::log_level::Info, "Printing formal param table for member " + member.memberName);
            member.formalParamTable.value().printFormalParamTable();
        }
    }
}

/**
 * @brief LocalVarTable class
 */

LocalVarTable::LocalVarTable(TypesTable& typesTable)
:
typesTable(typesTable),
varId(0),
scopeLevel(0)
{

}

LocalVarTable::~LocalVarTable() {}

void LocalVarTable::addLocalVar(const std::pair<std::string, std::string>& var) {
    // if var is already defined, throw an error
    if (isLocalVarDefined(var.first)) {
        throw std::runtime_error("Var " + var.first + " is already defined");
    }
    localVars.push_back(LocalVarInfo{var.first, var.second, varId, scopeLevel});
    varId++;
}

bool LocalVarTable::isLocalVarDefined(const std::string& var, const int64_t& scopeLevel) const {
    for (const auto& localVar : localVars) {
        if (localVar.varName == var && localVar.varScope == scopeLevel) {
            return true;
        }
    }
    return false;
}

void LocalVarTable::beginScope() {
    scopeLevel++;
}

void LocalVarTable::endscope() {
    scopeLevel--;
}

void LocalVarTable::printLocalVarTable() const {
    tabulate::Table localVarTabulate;
    localVarTabulate.add_row({"Var", "Var ID", "Var Type", "Var Scope"});
    for (const auto& localVar : localVars) {
        localVarTabulate.add_row({localVar.varName, std::to_string(localVar.varId), localVar.varType, std::to_string(localVar.varScope)});
    }
    if(!localVars.empty())
    {
        std::cout << localVarTabulate << std::endl;
    }
    
}

/**
 * @brief FormalParamTable class
 */

FormalParamTable::FormalParamTable(TypesTable& typesTable)
:
typesTable(typesTable),
currentParamId(0)
{

}

FormalParamTable::~FormalParamTable() {}

void FormalParamTable::addParam(const std::pair<std::string, std::string>& param) {
    // if param is already defined, throw an error
    if (isParamDefined(param.second)) {
        throw std::runtime_error("Param " + param.second + " is already defined");
    }
    params.push_back(FormalParamInfo{param.first, param.second, currentParamId});
    currentParamId++;
}

bool FormalParamTable::isParamDefined(const std::string& param) const {
    for (const auto& paramInfo : params) {
        if (paramInfo.paramName == param) {
            return true;
        }
    }
    return false;
}

void FormalParamTable::printFormalParamTable() const {
    tabulate::Table formalParamTabulate;
    formalParamTabulate.add_row({"Param", "Param ID", "Param Type"});
    for (const auto& param : params) {
        formalParamTabulate.add_row({param.paramName, std::to_string(param.paramId), param.paramType});
    }
    if (!params.empty())
    {
        std::cout << formalParamTabulate << std::endl;
    }
}

/**
 * @brief TypesTable class
 */

TypesTable::TypesTable() 
:
typeId(0)
{
    // push all primitive types
    typesTable.insert(std::make_pair("int", -1));
    typesTable.insert(std::make_pair("boolean", -1));
    typesTable.insert(std::make_pair("String", -1));
    typesTable.insert(std::make_pair("void", -1));
    typesTable.insert(std::make_pair("Object", 0));
}

TypesTable::~TypesTable() {}

bool TypesTable::isTypeDefined(const std::string& type) const {
    // make sure that given type is not an array, strip [] from the end
    std::string typeWithoutArray = type;
    if (typeWithoutArray.find("[]") != std::string::npos) {
        typeWithoutArray = typeWithoutArray.substr(0, typeWithoutArray.size() - 2);
    }

    return typesTable.find(typeWithoutArray) != typesTable.end();
}

void TypesTable::addType(const std::pair<std::string, int64_t>& type) {
    // if type is already defined, throw an error
    if (isTypeDefined(type.first)) {
        throw std::runtime_error("Type " + type.first + " is already defined");
    }
    typesTable.insert(type);
}

void TypesTable::printTypesTable() const {
    logger::log(logger::log_level::Info, "Printing types table: ");
    tabulate::Table typesTabulate;
    typesTabulate.add_row({"Type", "Type ID"});
    for (const auto& type : typesTable) {
        typesTabulate.add_row({type.first, std::to_string(type.second)});
    }
    if(!typesTable.empty())
    {
        std::cout << typesTabulate << std::endl;
    }
}

} // namespace ast
