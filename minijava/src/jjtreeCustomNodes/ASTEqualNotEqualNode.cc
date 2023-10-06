#include "jjtreeCustomNodes/ASTEqualNotEqualNode.h"

#include "MiniJavaParserVisitor.h"

ASTEqualNotEqualNode::ASTEqualNotEqualNode(int i) : SimpleNode(i) {}

ASTEqualNotEqualNode::ASTEqualNotEqualNode(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTEqualNotEqualNode::setName(JAVACC_STRING_TYPE name) {
    this->name = name;
}

ASTEqualNotEqualNode::~ASTEqualNotEqualNode() {}

JAVACC_STRING_TYPE ASTEqualNotEqualNode::toString() const
{
    return "EqualNotEqual: " + name;
}

void* ASTEqualNotEqualNode::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}