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

    void printTypesTable() const;

private:
    std::unordered_map<std::string, int64_t> typesTable;
    int64_t typeId;
};

class FormalParamTable {
public:
    explicit FormalParamTable(TypesTable& typesTable);
    ~FormalParamTable();

    void addParam(const std::pair<std::string, std::string>& param);
    bool isParamDefined(const std::string& param) const;

    void printFormalParamTable() const;

    struct FormalParamInfo {
        std::string paramType;
        std::string paramName;
        int64_t paramId;
    };

private:
    TypesTable& typesTable;
    std::vector<FormalParamInfo> params;
    int64_t currentParamId;
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

    void addLocalVar(const std::pair<std::string, std::string>& var);
    bool isLocalVarDefined(const std::string& var, const int64_t& scopeLevel=0) const;
    void beginScope();
    void endscope();

    void printLocalVarTable() const;

private:
    TypesTable& typesTable;
    std::vector<LocalVarInfo> localVars;
    int64_t varId, scopeLevel;
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

    void addMember(const std::pair<std::string, std::string>& member, const MemberType& memberType, const std::string& returnType="");
    void addParam(const std::pair<std::string, std::string>& param, const std::string& memberName);
    void addLocalVar(const std::pair<std::string, std::string>& var, const std::string& memberName);
    bool isMemberDefined(const std::string& member) const;

    void printMemberTable() const;
private:
    std::vector<MemberInfo> members;
    TypesTable& typesTable;
    int64_t currentMemberId;
};

class ClassTable {
public:
    explicit ClassTable(TypesTable& typesTable);
    ~ClassTable();

    void addClass(const std::string& className);
    void addMember(MemberTable::MemberInfo memberInfo, const std::string& className);
    void addParam(const std::pair<std::string, std::string>& param, const std::string& className, const std::string& memberName);
    void addLocalVar(const std::pair<std::string, std::string>& var, const std::string& className, const std::string& memberName);

    bool isClassDefined(const std::string& className) const;
    int64_t getCurrentClassId() const;

    void printClassTable() const;
    struct ClassInfo {
        std::string className;
        int64_t classId;
        int64_t parrrentClassId = -1;
        std::optional<MemberTable> memberTable;
    };

private:
    TypesTable& typesTable;
    std::vector<ClassInfo> classes;
    int64_t currentClassId;
};

class SymbolTable {

public:
    explicit SymbolTable(TypesTable& typesTable);
    ~SymbolTable();

    void addClass(const std::string& className);
    void addMember(const std::pair<std::string, std::string>& member, const MemberTable::MemberType& memberType, const std::string& returnType, const std::string& className);
    void addParam(const std::pair<std::string, std::string>& param, const std::string& className, const std::string& memberName);
    void addLocalVar(const std::pair<std::string, std::string>& var, const std::string& className, const std::string& memberName);

    void printSymbolTable() const;
    int64_t getCurrentClassId() const;

    TypesTable& typesTable;
private:
    std::optional<ClassTable> classTable;
    
};

} // namespace ast

#endif // SYMBOL_TABLE_H
