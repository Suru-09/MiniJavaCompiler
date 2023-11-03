#ifndef _GRAPHVIZ_PRINTER_VISITOR_H_
#define _GRAPHVIZ_PRINTER_VISITOR_H_

#include <iostream>
#include <filesystem>

#include "MiniJavaParserVisitor.h"

namespace ast {

class GraphvizPrinterVisitor : public MiniJavaParserVisitor {
public:
  void* visit(const SimpleNode *node, void* data);
  void* visit(const ASTRoot *node, void* data);
  void* visit(const ASTMainClass *node, void* data);
  void* visit(const ASTClassDecl *node, void* data);
  void* visit(const ASTVarDecl *node, void* data);
  void* visit(const ASTMethodDeclNode *node, void* data);
  void* visit(const ASTMethodIDNode *node, void* data);
  void* visit(const ASTArgsList *node, void* data);
  void* visit(const ASTArrayDeclNode *node, void* data);
  void* visit(const ASTSimpleTypeNode *node, void* data);
  void* visit(const ASTBlockStatementNode *node, void* data);
  void* visit(const ASTReturnStatementNode *node, void* data);
  void* visit(const ASTIfStatementNode *node, void* data);
  void* visit(const ASTWhileStatement *node, void* data);
  void* visit(const ASTPrintStatement *node, void* data);
  void* visit(const ASTOptionalExprStmt *node, void* data);
  void* visit(const ASTAssignNode *node, void* data);
  void* visit(const ASTOrNode *node, void* data);
  void* visit(const ASTAndNode *node, void* data);
  void* visit(const ASTEqualNotEqualNode *node, void* data);
  void* visit(const ASTRelationalNode *node, void* data);
  void* visit(const ASTAdditiveNode *node, void* data);
  void* visit(const ASTMultiplicativeNode *node, void* data);
  void* visit(const ASTUnaryNode *node, void* data);
  void* visit(const ASTLiteralNode *node, void* data);
  void* visit(const ASTIdentifier *node, void* data);
  void* visit(const ASTTypeNode *node, void* data);
  void* visit(const ASTInheritance *node, void* data);
  void* visit(const ASTAccessIdentifier *node, void* data);
public:
    std::string graphName;
    std::string graph;

    uint64_t nodeCount;

    void increaseNodeCount();
    uint64_t addNode(const std::string& label);
    void addEdge(uint64_t from, uint64_t to);
    std::filesystem::path getPathToGenerated();

    void visitChildrenAndAddEdges(const SimpleNode* node, uint64_t parent);

public:
    explicit GraphvizPrinterVisitor(const std::string& name);
    virtual ~GraphvizPrinterVisitor() = default;

    void writeToFile();
    void generateImage();
    void closeGraph();
};


}   // namespace ast

#endif // _GRAPHVIZ_PRINTER_VISITOR_H_