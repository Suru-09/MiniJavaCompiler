#include "jjtreeCustomNodes/ASTAdditiveNode.h"

#include "MiniJavaParserVisitor.h"

ASTAdditiveNode::ASTAdditiveNode(int i) : SimpleNode(i) {}

ASTAdditiveNode::ASTAdditiveNode(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTAdditiveNode::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTAdditiveNode::~ASTAdditiveNode() {}

JAVACC_STRING_TYPE ASTAdditiveNode::toString() const
{
    return name;
}

void* ASTAdditiveNode::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}