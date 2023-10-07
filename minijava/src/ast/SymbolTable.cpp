#include "ast/SymbolTable.h"

namespace ast {

/**
 * @brief SymbolTable class
 */

SymbolTable::SymbolTable(TypesTable& typesTable) 
: 
typesTable(typesTable),
classTable(std::nullopt)
{}

SymbolTable::~SymbolTable() {}

/**
 * @brief ClassTable class
 */

ClassTable::ClassTable(TypesTable& typesTable)
:
typesTable(typesTable),
membersTable(std::nullopt),
classId(0)
{
    // Object class is always present
    classIDPairs.insert(std::make_pair("Object", -1));
}

ClassTable::~ClassTable() {}

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

/**
 * @brief LocalVarTable class
 */

LocalVarTable::LocalVarTable(TypesTable& typesTable)
:
typesTable(typesTable),
varId(0)
{

}

LocalVarTable::~LocalVarTable() {}

/**
 * @brief FormalParamTable class
 */

FormalParamTable::FormalParamTable(TypesTable& typesTable)
:
typesTable(typesTable),
paramId(0)
{

}
FormalParamTable::~FormalParamTable() {}

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
    return typesTable.find(type) != typesTable.end();
}

void TypesTable::addType(const std::pair<std::string, int64_t>& type) {
    typesTable.insert(type);
}

} // namespace ast
