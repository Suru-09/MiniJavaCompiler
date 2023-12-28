/* Generated By:JJTree: Do not edit this line. SimpleNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include <stdio.h>
#include "SimpleNode.h"

#include "PostfixParserVisitor.h"


 SimpleNode::SimpleNode(int id) :
   id(id)
{
}

SimpleNode::SimpleNode(PostfixParser *parser, int id) :
     parser(parser), id(id) 
{
}

void SimpleNode::jjtOpen() const {
}

void SimpleNode::jjtClose() const {
}

void SimpleNode::jjtSetParent(Node *n) {
    parent = n; 
}
Node* SimpleNode::jjtGetParent() const {
    return parent; 
}

void SimpleNode::jjtAddChild(Node *n, int i) {
    if (i >= children.size()) {
      children.resize(i + 1, nullptr);
    }
    children[i] = n;
}

Node* SimpleNode::jjtGetChild(int i) const {
    return i < children.size() ? children[i] : nullptr;
}

int SimpleNode::jjtGetNumChildren() const {
    return children.size();
}

void SimpleNode::jjtSetValue(void * value) {
    this->value = value; 
}

void* SimpleNode::jjtGetValue() const {
    return value;
}

void  SimpleNode::jjtAccept(PostfixParserVisitor *visitor, void * data) const
{
    return visitor->visit(this, data);
}

void SimpleNode::jjtChildrenAccept(PostfixParserVisitor *visitor, void * data) const {
    for (int i = 0; i < children.size(); ++i) {
      children[i]->jjtAccept(visitor, data);
    }
}

void SimpleNode::jjtChildAccept(int childNo, PostfixParserVisitor *visitor, void * data) const {
    if (0 <= childNo && childNo < children.size())
      children[childNo]->jjtAccept(visitor, data);
}    	

  /* You can override these two methods in subclasses of SimpleNode to
     customize the way the node appears when the tree is dumped.  If
     your output uses more than one line you should override
     toString(string), otherwise overriding toString() is probably all
     you need to do. */

JJString SimpleNode::toString() const { return jjtNodeName[id]; }
JJString SimpleNode::toString(const JJString& prefix) const { return prefix + toString(); }

static JJChar space_char_arr_[] = { ' ', '\0' };
static JJChar newline_char_arr_[] = { '\n', '\0' };
static JJString space = space_char_arr_;
static JJString newline = newline_char_arr_;

  /* Override this method if you want to customize how the node dumps
     out its children. */

void SimpleNode::dumpToBuffer(const JJString& prefix, const JJString& separator, JJString *buffer) const {
    buffer->append(toString(prefix));
    buffer->append(separator);
    for (int i = 0; i < children.size(); ++i) {
      SimpleNode *n = (SimpleNode*)children[i];
      if (n != nullptr) {
        n->dumpToBuffer(prefix + space, separator, buffer);
      }
    }
}
  
void SimpleNode::dump(const JJString& prefix) const {
    JJString *buffer = new JJString();
    dumpToBuffer(prefix, newline, buffer);
    for (int i = 0; i < buffer->size(); i++) {
      printf("%c", (*buffer)[i]);
    }
    delete buffer;
}

SimpleNode::~SimpleNode() {
    for (int i = 0; i < children.size(); ++i) {
      delete children[i];
    }
}
  
/* JavaCC - OriginalChecksum=5a2c2b1ce5e78e52325059450846e710 (do not edit this line) */
