#include "ast/GraphvizPrinterVisitor.h"

#include "logger/Logger.h"

#include <fstream>

namespace ast {

GraphvizPrinterVisitor::GraphvizPrinterVisitor(const std::string& name)
:
graphName(name),
nodeCount(0)
{
    graph = "digraph G { \n rankdir=\"LR\" \n";
}

void GraphvizPrinterVisitor::closeGraph() {
    graph += "}";
}

void GraphvizPrinterVisitor::increaseNodeCount() {
    nodeCount++;
}

uint64_t GraphvizPrinterVisitor::addNode(const std::string& label) {
    increaseNodeCount();
    graph += std::to_string(nodeCount) + " [label=\"" + label + "\"];\n";
    return nodeCount;
}

void GraphvizPrinterVisitor::addEdge(uint64_t from, uint64_t to) {
    graph += std::to_string(from) + " -> " + std::to_string(to) + ";\n";
}

void GraphvizPrinterVisitor::visitChildrenAndAddEdges(const SimpleNode* node, uint64_t parent) {
    for(size_t cIdx = 0; cIdx < node->jjtGetNumChildren(); ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
        addEdge(parent, reinterpret_cast<uint64_t>(returnedNodeCount));
    }
}


std::filesystem::path GraphvizPrinterVisitor::getPathToGenerated() {
    std::filesystem::path path = std::filesystem::current_path().parent_path();
    path /= "astVisual";
    if (!std::filesystem::exists(path)) {
        std::filesystem::create_directory(path);
    }

    path /= graphName;
    path += ".dot";
    return path;
}

void GraphvizPrinterVisitor::writeToFile() {
    std::filesystem::path path = getPathToGenerated();
    if (!std::filesystem::exists(path.parent_path())) {
        std::filesystem::create_directory(path.parent_path());
    }

    std::string fileName = graphName + ".dot";
    std::ofstream file(path);
    if (!file.is_open()) {
        logger::log(logger::log_level::Error, "Could not open file " + fileName);
        return;
    }

    file << graph;
    file.close();
}

void GraphvizPrinterVisitor::generateImage() {
    std::filesystem::path path = getPathToGenerated();
    std::string command = "dot -Tpng " + path.string() + " -o " + path.parent_path().string() + "/" + graphName + ".png";
    system(command.c_str());
}


// implement all the visit functions here
void* GraphvizPrinterVisitor::visit(const SimpleNode *node, void* data) {
    for(size_t cIdx = 0; cIdx < node->jjtGetNumChildren(); ++cIdx)
    {
        node->jjtGetChild(cIdx)->jjtAccept(this, data);
    }
}

void* GraphvizPrinterVisitor::visit(const ASTRoot *node, void* data) {
    uint64_t rootId = addNode("Root");
    visitChildrenAndAddEdges(node, rootId);
    return reinterpret_cast<void*>(rootId);
}

void* GraphvizPrinterVisitor::visit(const ASTMainClass *node, void* data) {
    uint64_t mainClassId = addNode("MainClass");
    visitChildrenAndAddEdges(node, mainClassId);
    return reinterpret_cast<void*>(mainClassId);
}

void* GraphvizPrinterVisitor::visit(const ASTClassDecl *node, void* data) {
    uint64_t classDeclId = addNode("ClassDecl");
    visitChildrenAndAddEdges(node, classDeclId);
    return reinterpret_cast<void*>(classDeclId);;
}

void* GraphvizPrinterVisitor::visit(const ASTVarDecl *node, void* data) {
    uint64_t varDeclId = addNode("VarDecl");
    visitChildrenAndAddEdges(node, varDeclId);
    return reinterpret_cast<void*>(varDeclId);
}

void* GraphvizPrinterVisitor::visit(const ASTMethodDeclNode *node, void* data) {
    uint64_t methodDeclId = addNode("MethodDecl");
    visitChildrenAndAddEdges(node, methodDeclId);
    return reinterpret_cast<void*>(methodDeclId);
}

void* GraphvizPrinterVisitor::visit(const ASTMethodIDNode *node, void* data) {
    uint64_t methodId = addNode("MethodID: " + node->toString());
    return reinterpret_cast<void*>(methodId);
}

void* GraphvizPrinterVisitor::visit(const ASTArgsList *node, void* data) {
    uint64_t argsListId = addNode("ArgsList");
    // arguments come in pairs of 2
    assert(node->jjtGetNumChildren() % 2 == 0);

    for(size_t cIdx = 0; cIdx < node->jjtGetNumChildren(); cIdx += 2)
    {
        uint64_t typeNodeId = reinterpret_cast<uint64_t>(node->jjtGetChild(cIdx)->jjtAccept(this, data));
        uint64_t identifierId = reinterpret_cast<uint64_t>(node->jjtGetChild(cIdx + 1)->jjtAccept(this, data));
        addEdge(argsListId, typeNodeId);
        addEdge(typeNodeId, identifierId);
    }
    return reinterpret_cast<void*>(argsListId);
}

void* GraphvizPrinterVisitor::visit(const ASTArrayDeclNode *node, void* data) {
    uint64_t arrayDeclId = addNode("ArrayDecl");
    visitChildrenAndAddEdges(node, arrayDeclId);
    return reinterpret_cast<void*>(arrayDeclId);
}

void* GraphvizPrinterVisitor::visit(const ASTSimpleTypeNode *node, void* data) {
    uint64_t simpleTypeId = addNode(node->toString());
    return reinterpret_cast<void*>(simpleTypeId);
}

void* GraphvizPrinterVisitor::visit(const ASTBlockStatementNode* node, void* data) {
    uint64_t blockStatementId = addNode("BlockStatement");
    visitChildrenAndAddEdges(node, blockStatementId);
    return reinterpret_cast<void*>(blockStatementId);
}

void* GraphvizPrinterVisitor::visit(const ASTReturnStatementNode *node, void* data) {
    uint64_t returnStatementId = addNode("ReturnStatement");
    visitChildrenAndAddEdges(node, returnStatementId);
    return reinterpret_cast<void*>(returnStatementId);
}

void* GraphvizPrinterVisitor::visit(const ASTIfStatementNode *node, void* data) {
    uint64_t ifStatementId = addNode("IfStatement");
    visitChildrenAndAddEdges(node, ifStatementId);
    return reinterpret_cast<void*>(ifStatementId);
}

void* GraphvizPrinterVisitor::visit(const ASTWhileStatement *node, void* data) {
    uint64_t whileStatementId = addNode("WhileStatement");
    visitChildrenAndAddEdges(node, whileStatementId);
    return reinterpret_cast<void*>(whileStatementId);
}

void* GraphvizPrinterVisitor::visit(const ASTPrintStatement *node, void* data) {
    uint64_t printStatementId = addNode("PrintStatement");
    visitChildrenAndAddEdges(node, printStatementId);
    return reinterpret_cast<void*>(printStatementId);
}

void* GraphvizPrinterVisitor::visit(const ASTOptionalExprStmt *node, void* data) {
    uint64_t optionalExprStmtId = addNode("ExprStmt");
    visitChildrenAndAddEdges(node, optionalExprStmtId);
    return reinterpret_cast<void*>(optionalExprStmtId);
}

void* GraphvizPrinterVisitor::visit(const ASTAssignNode *node, void* data) {
    uint64_t assignId = addNode("Assign");
    // assign should have 2 children
    assert(node->jjtGetNumChildren() == 2);
    void* left = node->jjtGetChild(0)->jjtAccept(this, nullptr);
    void* right = node->jjtGetChild(1)->jjtAccept(this, nullptr);
    addEdge(assignId, reinterpret_cast<uint64_t>(left));
    addEdge(reinterpret_cast<uint64_t>(left), reinterpret_cast<uint64_t>(right));
    return reinterpret_cast<void*>(assignId);
}

void* GraphvizPrinterVisitor::visit(const ASTOrNode *node, void* data) {
    uint64_t orId = addNode("||");
    visitChildrenAndAddEdges(node, orId);
    return reinterpret_cast<void*>(orId);
}

void* GraphvizPrinterVisitor::visit(const ASTAndNode *node, void* data) {
    uint64_t andId = addNode("&&");
    visitChildrenAndAddEdges(node, andId);
    return reinterpret_cast<void*>(andId);
}

void* GraphvizPrinterVisitor::visit(const ASTEqualNotEqualNode *node, void* data) {
    uint64_t equalNotEqualId = addNode("EqualNotEqual");
    visitChildrenAndAddEdges(node, equalNotEqualId);
    return reinterpret_cast<void*>(equalNotEqualId);
}

void* GraphvizPrinterVisitor::visit(const ASTRelationalNode *node, void* data) {
    uint64_t relationalId = addNode("Relational");
    visitChildrenAndAddEdges(node, relationalId);
    return reinterpret_cast<void*>(relationalId);
}

void* GraphvizPrinterVisitor::visit(const ASTAdditiveNode *node, void* data) {
    uint64_t additiveId = addNode(node->toString());
    visitChildrenAndAddEdges(node, additiveId);
    return reinterpret_cast<void*>(additiveId);
}

void* GraphvizPrinterVisitor::visit(const ASTMultiplicativeNode *node, void* data) {
    uint64_t multiplicativeId = addNode(node->toString());
    visitChildrenAndAddEdges(node, multiplicativeId);
    return reinterpret_cast<void*>(multiplicativeId);
}

void* GraphvizPrinterVisitor::visit(const ASTUnaryNode *node, void* data) {
    uint64_t unaryId = addNode(node->toString());
    visitChildrenAndAddEdges(node, unaryId);
    return reinterpret_cast<void*>(unaryId);
}

void* GraphvizPrinterVisitor::visit(const ASTLiteralNode *node, void* data) {
    uint64_t literalId = addNode(node->toString());
    return reinterpret_cast<void*>(literalId);
}

void* GraphvizPrinterVisitor::visit(const ASTIdentifier *node, void* data) {
    uint64_t identifierId = addNode(node->toString());
    return reinterpret_cast<void*>(identifierId);
}

void* GraphvizPrinterVisitor::visit(const ASTTypeNode *node, void* data)
{
    // should not display a type node but its children
    // for now we have 2 cases only
    // 1. SimpleType  OR Identifier
    // 2. (SimpleType  OR Identifier) AND ArrayDecl
    uint64_t simpleTypeOrID = reinterpret_cast<uint64_t>(node->jjtGetChild(0)->jjtAccept(this, data));
    if (node->jjtGetNumChildren() == 1) {
        return reinterpret_cast<void*>(simpleTypeOrID);
    }

    uint64_t arrayDeclId = reinterpret_cast<uint64_t>(node->jjtGetChild(1)->jjtAccept(this, data));
    addEdge(simpleTypeOrID, arrayDeclId);

    return reinterpret_cast<void*>(simpleTypeOrID);
}

}