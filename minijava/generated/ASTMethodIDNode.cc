/* Generated By:JJTree: Do not edit this line. ASTMethodIDNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTMethodIDNode.h"
#include "MiniJavaParserVisitor.h"

  
  ASTMethodIDNode::ASTMethodIDNode(int id) : SimpleNode(id) {
  }
  ASTMethodIDNode::ASTMethodIDNode(MiniJavaParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTMethodIDNode::~ASTMethodIDNode() {
  }

  /** Accept the visitor. **/
  void* ASTMethodIDNode::jjtAccept(MiniJavaParserVisitor *visitor, void* data) const {
    return 
    visitor->visit(this, data);
  }

