#ifndef _AST_MULTIPLICATIVE_NODE_H_
#define _AST_MULTIPLICATIVE_NODE_H_

#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTMultiplicativeNode : public SimpleNode {

public:
    ASTMultiplicativeNode(int i);
    ASTMultiplicativeNode(MiniJavaParser *p, int i);
    virtual ~ASTMultiplicativeNode();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};


#endif // _AST_MULTIPLICATIVE_NODE_H_