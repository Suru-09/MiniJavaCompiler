#include "jjtreeCustomNodes/ASTClassDecl.h"

#include "MiniJavaParserVisitor.h"

ASTClassDecl::ASTClassDecl(int i) : SimpleNode(i) {}

ASTClassDecl::ASTClassDecl(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTClassDecl::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTClassDecl::~ASTClassDecl() {}

JAVACC_STRING_TYPE ASTClassDecl::toString() const
{
    return name;
}

void* ASTClassDecl::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}