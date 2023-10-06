#include "jjtreeCustomNodes/ASTRelationalNode.h"

#include "MiniJavaParserVisitor.h"

ASTRelationalNode::ASTRelationalNode(int i) : SimpleNode(i) {}

ASTRelationalNode::ASTRelationalNode(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTRelationalNode::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTRelationalNode::~ASTRelationalNode() {}

JAVACC_STRING_TYPE ASTRelationalNode::toString() const
{
    return name;
}

void* ASTRelationalNode::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}