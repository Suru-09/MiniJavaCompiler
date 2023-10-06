#ifndef _AST_SIMPLE_TYPE_NODE_H_
#define _AST_SIMPLE_TYPE_NODE_H_

#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTSimpleTypeNode : public SimpleNode {

public:
    ASTSimpleTypeNode(int i);
    ASTSimpleTypeNode(MiniJavaParser *p, int i);
    virtual ~ASTSimpleTypeNode();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};


#endif // _AST_SIMPLE_TYPE_NODE_H_