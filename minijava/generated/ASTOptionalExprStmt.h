/* Generated By:JJTree: Do not edit this line. ASTOptionalExprStmt.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTOptionalExprStmt_H_
#define ASTOptionalExprStmt_H_

#include "SimpleNode.h"

class MiniJavaParser;

class ASTOptionalExprStmt : public SimpleNode {
public: 
           ASTOptionalExprStmt(int id);
           ASTOptionalExprStmt(MiniJavaParser *parser, int id);
  virtual ~ASTOptionalExprStmt();

  /** Accept the visitor. **/
  virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void* data) const ;
};


#endif
