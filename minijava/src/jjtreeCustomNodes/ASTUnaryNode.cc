#include "jjtreeCustomNodes/ASTUnaryNode.h"

#include "MiniJavaParserVisitor.h"

ASTUnaryNode::ASTUnaryNode(int i) : SimpleNode(i) {}

ASTUnaryNode::ASTUnaryNode(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTUnaryNode::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTUnaryNode::~ASTUnaryNode() {}

JAVACC_STRING_TYPE ASTUnaryNode::toString() const
{
    return name;
}

void* ASTUnaryNode::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}