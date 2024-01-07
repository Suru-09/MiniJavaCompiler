#include "PrefixVisitor.h"

#include <filesystem>
#include <fstream>
#include <iostream>

namespace visitors {

PrefixVisitor::PrefixVisitor()
{
}

void PrefixVisitor::visitChildrenAndAddEdges(const SimpleNode* node) {
    for(int cIdx = 0; cIdx < node->jjtGetNumChildren(); ++cIdx)
    {
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
    }
}

void* PrefixVisitor::visit(const SimpleNode *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* PrefixVisitor::visit(const ASTRoot *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* PrefixVisitor::visit(const ASTExpression *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; cIdx++)
    {
        if (cIdx % 2 == 0) {
            std::cout << "+ ";
        }
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);
    }
    if (numChildren % 2 == 1) {
        std::cout << "+ ";
    }
    return data;
}

void* PrefixVisitor::visit(const ASTTerm *node, void* data) {
    auto numChildren = node->jjtGetNumChildren();
    for(int cIdx = 0; cIdx < numChildren; cIdx++)
    {
        if (cIdx % 2 == 0) {
            std::cout << "* ";
        }
        void* returnedNodeCount = node->jjtGetChild(cIdx)->jjtAccept(this, nullptr);  
    }
    if (numChildren % 2 == 1) {
        std::cout << "* ";
    }
    return data;
}

void* PrefixVisitor::visit(const ASTFactor *node, void* data) {
    visitChildrenAndAddEdges(node);
    return data;
}

void* PrefixVisitor::visit(const ASTIntegerConstant *node, void* data) {
    visitChildrenAndAddEdges(node);
    std::cout << node->toString() + " ";
    return data;
}


}