/* Generated By:JJTree: Do not edit this line. ASTArrayDeclNode.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTArrayDeclNode_H_
#define ASTArrayDeclNode_H_

#include "SimpleNode.h"

class MiniJavaParser;

class ASTArrayDeclNode : public SimpleNode {
public: 
           ASTArrayDeclNode(int id);
           ASTArrayDeclNode(MiniJavaParser *parser, int id);
  virtual ~ASTArrayDeclNode();

  /** Accept the visitor. **/
  virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void* data) const ;
};


#endif