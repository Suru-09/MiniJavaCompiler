#include <iostream>
#include <filesystem>

#include "utils.h"

int main(int argc, char* argv[]) {
    utils::cleanUpVisuliazerFiles();
    std::filesystem::path testFilePath = "../testing_files/Week_1_2/ComprehensiveTest.java";
    utils::parseAndReportErrorsFromFile(testFilePath, "ComprehensiveTest");

    return 0;
}