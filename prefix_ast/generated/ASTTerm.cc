/* Generated By:JJTree: Do not edit this line. ASTTerm.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTTerm.h"
#include "PrefixParserVisitor.h"

  
  ASTTerm::ASTTerm(int id) : SimpleNode(id) {
  }
  ASTTerm::ASTTerm(PrefixParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTTerm::~ASTTerm() {
  }

  /** Accept the visitor. **/
  void* ASTTerm::jjtAccept(PrefixParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }
