#include "jjtreeCustomNodes/ASTMultiplicativeNode.h"

#include "MiniJavaParserVisitor.h"

ASTMultiplicativeNode::ASTMultiplicativeNode(int i) : SimpleNode(i) {}

ASTMultiplicativeNode::ASTMultiplicativeNode(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTMultiplicativeNode::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTMultiplicativeNode::~ASTMultiplicativeNode() {}

JAVACC_STRING_TYPE ASTMultiplicativeNode::toString() const
{
    return name;
}

void* ASTMultiplicativeNode::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}