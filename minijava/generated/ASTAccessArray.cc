/* Generated By:JJTree: Do not edit this line. ASTAccessArray.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTAccessArray.h"
#include "MiniJavaParserVisitor.h"

  
  ASTAccessArray::ASTAccessArray(int id) : SimpleNode(id) {
  }
  ASTAccessArray::ASTAccessArray(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTAccessArray::~ASTAccessArray() {
  }

  /** Accept the visitor. **/
  void* ASTAccessArray::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

