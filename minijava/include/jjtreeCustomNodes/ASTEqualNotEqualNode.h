#ifndef __AST_EQUAL_NOT_EQUAL_NODE_H__
#define __AST_EQUAL_NOT_EQUAL_NODE_H__

#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTEqualNotEqualNode : public SimpleNode {

public:
    ASTEqualNotEqualNode(int i);
    ASTEqualNotEqualNode(MiniJavaParser *p, int i);
    virtual ~ASTEqualNotEqualNode();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};


#endif // __AST_EQUAL_NOT_EQUAL_NODE_H__