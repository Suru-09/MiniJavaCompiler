#include "jjtreeCustomNodes/ASTSimpleTypeNode.h"

#include "MiniJavaParserVisitor.h"

ASTSimpleTypeNode::ASTSimpleTypeNode(int i) : SimpleNode(i) {}

ASTSimpleTypeNode::ASTSimpleTypeNode(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTSimpleTypeNode::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTSimpleTypeNode::~ASTSimpleTypeNode() {}

JAVACC_STRING_TYPE ASTSimpleTypeNode::toString() const
{
    return name;
}

void* ASTSimpleTypeNode::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}