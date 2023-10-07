#ifndef __UTILS_H__
#define __UTILS_H__

#include <iostream>
#include <string>
#include <filesystem>

class SimpleNode;

namespace utils {

std::string readStringFromFile(const std::filesystem::path& path);
void cleanUpVisuliazerFiles();
int parseAndReportErrorsFromFile(const std::filesystem::path& file,const std::string& graphName, bool isConsoleVerbose = true);
void generateGraphImage(const std::string& name, SimpleNode* root);
void buildSymbolTable(SimpleNode* root);


}   // namespace utils


#endif // __UTILS_H__