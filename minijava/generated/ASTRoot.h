/* Generated By:JJTree: Do not edit this line. ASTRoot.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef ASTRoot_H_
#define ASTRoot_H_

#include "SimpleNode.h"

class MiniJavaParser;

class ASTRoot : public SimpleNode {
public: 
           ASTRoot(int id);
           ASTRoot(MiniJavaParser *parser, int id);
  virtual ~ASTRoot();

  /** Accept the visitor. **/
  virtual void* jjtAccept(MiniJavaParserVisitor *visitor, void* data) const ;
};


#endif
