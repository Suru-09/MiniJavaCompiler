#ifndef _TYPE_CHECKING_PASS_H_
#define _TYPE_CHECKING_PASS_H_

#include "MiniJavaParserVisitor.h"
#include "ast/SymbolTable.h"

namespace ast {

class TypeCheckingPass : public MiniJavaParserVisitor {
public:
    explicit TypeCheckingPass(const SymbolTable& symbolTable, const TypesTable& typesTable);

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

private:
    const SymbolTable& symbolTable;
    const TypesTable& typesTable;
};

}   // namespace ast

#endif // _TYPE_CHECKING_PASS_H_