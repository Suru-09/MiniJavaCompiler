#ifndef _AST_UNARY_NODE_H_
#define _AST_UNARY_NODE_H_


#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTUnaryNode : public SimpleNode {

public:
    ASTUnaryNode(int i);
    ASTUnaryNode(MiniJavaParser *p, int i);
    virtual ~ASTUnaryNode();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};

#endif // _AST_UNARY_NODE_H_