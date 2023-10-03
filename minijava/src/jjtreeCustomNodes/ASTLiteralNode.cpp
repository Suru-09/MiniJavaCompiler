#include "jjtreeCustomNodes/ASTLiteralNode.h"

#include "MiniJavaParserVisitor.h"

ASTLiteralNode::ASTLiteralNode(int i) : SimpleNode(i) {}

ASTLiteralNode::ASTLiteralNode(MiniJavaParser *p, int i) : SimpleNode(p, i) {}

void ASTLiteralNode::setValue(JAVACC_STRING_TYPE literal_value) {
    this->literal_value = literal_value;
}

ASTLiteralNode::~ASTLiteralNode() {}

JAVACC_STRING_TYPE ASTLiteralNode::toString() const
{
    return "Literal: " + literal_value;
}

void* ASTLiteralNode::jjtAccept(MiniJavaParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}