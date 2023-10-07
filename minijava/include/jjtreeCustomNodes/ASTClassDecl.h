#ifndef _AST_CLASS_DECL_H_
#define _AST_CLASS_DECL_H_

#include <iostream>

#include "MiniJavaParserTree.h"

class MiniJavaParserVisitor;

class ASTClassDecl : public SimpleNode {

public:
    ASTClassDecl(int i);
    ASTClassDecl(MiniJavaParser *p, int i);
    virtual ~ASTClassDecl();

    void setName(JAVACC_STRING_TYPE name);
    JAVACC_STRING_TYPE toString() const;

    virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void * data) const;
private:
    JAVACC_STRING_TYPE name;
};

#endif  // _AST_CLASS_DECL_H_