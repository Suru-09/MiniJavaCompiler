#ifndef __AST_LITERAL_NODE_H__
#define __AST_LITERAL_NODE_H__

#include <iostream>

#include "SimpleNode.h"

class MiniJavaParserVisitor;

class ASTLiteralNode : public SimpleNode {
    
public:
    ASTLiteralNode(int i);
    ASTLiteralNode(MiniJavaParser *p, int i);
    virtual ~ASTLiteralNode();
    
    void setValue(JAVACC_STRING_TYPE literal_value);
    JAVACC_STRING_TYPE toString() const;
    
    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE literal_value;
};


#endif // __AST_LITERAL_NODE_H__