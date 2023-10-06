#include "jjtreeCustomNodes/ASTIdentifier.h"

#include "MiniJavaParserVisitor.h"

ASTIdentifier::ASTIdentifier(int i) : SimpleNode(i) {}

ASTIdentifier::ASTIdentifier(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTIdentifier::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTIdentifier::~ASTIdentifier() {}

JAVACC_STRING_TYPE ASTIdentifier::toString() const
{
    return name;
}

void* ASTIdentifier::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}