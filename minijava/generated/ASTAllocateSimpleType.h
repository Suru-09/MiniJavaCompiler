/* Generated By:JJTree: Do not edit this line. ASTAllocateSimpleType.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTAllocateSimpleType_H_
#define ASTAllocateSimpleType_H_

#include "SimpleNode.h"

class MiniJavaParser;

class ASTAllocateSimpleType : public SimpleNode {
public: 
           ASTAllocateSimpleType(int id);
           ASTAllocateSimpleType(MiniJavaParser *parser, int id);
  virtual ~ASTAllocateSimpleType();

  /** Accept the visitor. **/
  virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void* data) const ;
};


#endif
