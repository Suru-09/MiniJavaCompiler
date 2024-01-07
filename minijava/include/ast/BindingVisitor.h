#ifndef _BINDING_VISITOR_H_
#define _BINDING_VISITOR_H_

#include "MiniJavaParserVisitor.h"
#include "ast/SymbolTable.h"

namespace ast {

class BindingVisitor : public MiniJavaParserVisitor {
public:
    BindingVisitor(SymbolTable& symbolTable, TypesTable& typesTable);

    void* visit(const SimpleNode *node, void* data);
    void* visit(const ASTRoot *node, void* data);
    void* visit(const ASTMainClass *node, void* data);
    void* visit(const ASTClassDecl *node, void* data);
    void* visit(const ASTVarDecl *node, void* data);
    void* visit(const ASTMethodDeclNode *node, void* data);
    void* visit(const ASTMethodIDNode *node, void* data);
    void* visit(const ASTArgsList *node, void* data);
    void* visit(const ASTArrayDeclNode *node, void* data);
    void* visit(const ASTSimpleTypeNode *node, void* data);
    void* visit(const ASTBlockStatementNode *node, void* data);
    void* visit(const ASTReturnStatementNode *node, void* data);
    void* visit(const ASTIfStatementNode *node, void* data);
    void* visit(const ASTWhileStatement *node, void* data);
    void* visit(const ASTPrintStatement *node, void* data);
    void* visit(const ASTOptionalExprStmt *node, void* data);
    void* visit(const ASTAssignNode *node, void* data);
    void* visit(const ASTOrNode *node, void* data);
    void* visit(const ASTAndNode *node, void* data);
    void* visit(const ASTEqualNotEqualNode *node, void* data);
    void* visit(const ASTRelationalNode *node, void* data);
    void* visit(const ASTAdditiveNode *node, void* data);
    void* visit(const ASTMultiplicativeNode *node, void* data);
    void* visit(const ASTUnaryNode *node, void* data);
    void* visit(const ASTLiteralNode *node, void* data);
    void* visit(const ASTIdentifier *node, void* data);
    void* visit(const ASTTypeNode *node, void* data);
    void* visit(const ASTInheritance *node, void* data);
    void* visit(const ASTAccessIdentifier *node, void* data);
    void* visit(const ASTAccessArray *node, void* data);
    void* visit(const ASTPrimaryExpNode *node, void* data);
    void* visit(const ASTFunCall *node, void* data);
    void* visit(const ASTFunArgs *node, void* data);
    void* visit(const ASTAccessLength *node, void* data);
    void* visit(const ASTAllocateIdentifier *node, void* data);
    void* visit(const ASTAllocateArray *node, void* data);

    void printSymbolTable() const;

    SymbolTable& getSymbolTable() const;
    TypesTable& getTypesTable() const;
private:
    SymbolTable& symbolTable;
    TypesTable& typesTable;
    std::string currentClassName;
    std::string currentMemberName;

    // to be used after accepting a node, do not
    // rely on its value otherwise
    std::string returnValue;

    void* visitChildrenNodes(const Node*node, void* data, int start = 0);
    void checkWhetherIdentifierIsDefined(const std::string& identifier);
};

}   // namespace ast

#endif // _BINDING_VISITOR_H_