#ifndef __AST_RELATIONAL_NODE_H__
#define __AST_RELATIONAL_NODE_H__

#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTRelationalNode : public SimpleNode {

public:
    ASTRelationalNode(int i);
    ASTRelationalNode(MiniJavaParser *p, int i);
    virtual ~ASTRelationalNode();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};


#endif // __AST_RELATIONAL_NODE_H__