#ifndef __UTILS_H__
#define __UTILS_H__

#include <iostream>
#include <string>
#include <filesystem>

namespace utils {

std::string readStringFromFile(const std::filesystem::path& path);
void cleanUpVisuliazerFiles();
int parseAndReportErrorsFromFile(const std::filesystem::path& file,const std::string& graphName, bool isConsoleVerbose = true);

}   // namespace utils


#endif // __UTILS_H__