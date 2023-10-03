#ifndef __JJTREE_CUSTOM_NODES_H__
#define __JJTREE_CUSTOM_NODES_H__

#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTIdentifier : public SimpleNode {

public:
    ASTIdentifier(int i);
    ASTIdentifier(MiniJavaParser *p, int i);
    virtual ~ASTIdentifier();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};


#endif // __JJTREE_CUSTOM_NODES_H__