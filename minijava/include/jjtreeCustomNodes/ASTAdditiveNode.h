#ifndef _AST_ADDITIVE_NODE_H_
#define _AST_ADDITIVE_NODE_H_

#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTAdditiveNode : public SimpleNode {

public:
    ASTAdditiveNode(int i);
    ASTAdditiveNode(MiniJavaParser *p, int i);
    virtual ~ASTAdditiveNode();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};


#endif // _AST_ADDITIVE_NODE_H_