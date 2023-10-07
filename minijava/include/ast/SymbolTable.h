#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <iostream>
#include <optional>
#include <unordered_map>
#include <vector>

namespace ast {

class TypesTable {
public:
    explicit TypesTable();
    ~TypesTable();

    bool isTypeDefined(const std::string& type) const;
    void addType(const std::pair<std::string, int64_t>& type);

private:
    std::unordered_map<std::string, int64_t> typesTable;
    int64_t typeId;
};

class FormalParamTable {
public:
    explicit FormalParamTable(TypesTable& typesTable);
    ~FormalParamTable();

private:
    TypesTable& typesTable;
    std::string returnType;
    std::unordered_map<std::string, std::string> paramTypePairs;
    int64_t paramId;
};

class LocalVarTable {
public:
    explicit LocalVarTable(TypesTable& typesTable);
    ~LocalVarTable();

    struct LocalVarInfo {
        std::string varType;
        std::string varName;
        int64_t varId;
        int64_t varScope;
    };

private:
    TypesTable& typesTable;
    std::vector<LocalVarInfo> localVars;
    int64_t varId;
};

class MemberTable {
public:
    explicit MemberTable(TypesTable& typesTable);
    ~MemberTable();

    enum class MemberType {
        FIELD,
        METHOD
    };

    struct MemberInfo {
        MemberType memberType;
        std::string returnType;
        std::string memberName;
        int64_t memberId;
        std::optional<LocalVarTable> localVarTable;
        std::optional<FormalParamTable> formalParamTable;
    };
private:
    std::vector<MemberInfo> members;
    TypesTable& typesTable;
    int64_t currentMemberId;
};

class ClassTable {
public:
    explicit ClassTable(TypesTable& typesTable);
    ~ClassTable();

private:
    std::optional<MemberTable> membersTable;
    TypesTable& typesTable;
    std::unordered_map<std::string, std::int64_t> classIDPairs;
    int64_t classId;
};

class SymbolTable {

public:
    explicit SymbolTable(TypesTable& typesTable);
    ~SymbolTable();

private:
    std::optional<ClassTable> classTable;
    TypesTable& typesTable;
};

} // namespace ast

#endif // SYMBOL_TABLE_H
