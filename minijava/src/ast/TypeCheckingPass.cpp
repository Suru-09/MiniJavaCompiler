#include "ast/TypeCheckingPass.h"


namespace ast {
    

TypeCheckingPass::TypeCheckingPass(const SymbolTable& symbolTable, const TypesTable& typesTable) 
: 
symbolTable(symbolTable), 
typesTable(typesTable) 
{
}

void* TypeCheckingPass::visit(const SimpleNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTRoot *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTMainClass *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTClassDecl *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTVarDecl *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTMethodDeclNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTMethodIDNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTArgsList *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTArrayDeclNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTSimpleTypeNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTBlockStatementNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTReturnStatementNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTIfStatementNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTWhileStatement *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTPrintStatement *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTOptionalExprStmt *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTAssignNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTOrNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTAndNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTEqualNotEqualNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTRelationalNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTAdditiveNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTMultiplicativeNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTUnaryNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTLiteralNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTIdentifier *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTTypeNode *node, void* data) {
    return data;
}

void* TypeCheckingPass::visit(const ASTInheritance *node, void* data) {
    return data;
}

}  // namespace ast