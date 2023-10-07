#include <iostream>
#include <filesystem>

#include "utils.h"
#include "logger/Logger.h"

int main(int argc, char* argv[]) {

    logger::setLogLevel(logger::log_level::Info);

    utils::cleanUpVisuliazerFiles();
    std::filesystem::path testFilePath = "../testing_files/Week_1_2/ComprehensiveTest.java";
    auto errors = utils::parseAndReportErrorsFromFile(testFilePath, "ComprehensiveTest", false);
    if(errors > 0)
    {
        logger::log(logger::log_level::Error, "Parsing was unsuccessful with " + std::to_string(errors) + " errors");
    }
    else if(errors == 0)
    {
        logger::log(logger::log_level::Info, "Parsing was successful");
    }
    else
    {
        logger::log(logger::log_level::Error, "Error while parsing");
    }
    
    return 0;
}