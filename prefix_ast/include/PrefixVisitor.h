#ifndef __POSTFIX_VISITOR__H__
#define  __POSTFIX_VISITOR__H__

#include <iostream>
#include <filesystem>
#include <fstream>

#include "PrefixParserVisitor.h"

namespace visitors {

class PrefixVisitor : public PrefixParserVisitor {
public:
  void* visit(const SimpleNode *node, void* data);
  void* visit(const ASTRoot *node, void* data);
  void* visit(const ASTExpression *node, void* data);
  void* visit(const ASTTerm *node, void* data);
  void* visit(const ASTFactor *node, void* data);
  void* visit(const ASTIntegerConstant *node, void* data);

private:
    std::string graphName;
    std::string graph;

    uint64_t nodeCount;

    void visitChildrenAndAddEdges(const SimpleNode* node);

public:
    explicit PrefixVisitor();
    virtual ~PrefixVisitor() = default;
};

} // namespace visitors

#endif //  __POSTFIX_VISITOR__H__