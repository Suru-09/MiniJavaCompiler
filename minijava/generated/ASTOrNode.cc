/* Generated By:JJTree: Do not edit this line. ASTOrNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTOrNode.h"
#include "MiniJavaParserVisitor.h"

  
  ASTOrNode::ASTOrNode(int id) : SimpleNode(id) {
  }
  ASTOrNode::ASTOrNode(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTOrNode::~ASTOrNode() {
  }

  /** Accept the visitor. **/
  void* ASTOrNode::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

