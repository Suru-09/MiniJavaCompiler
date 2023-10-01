#include <iostream>
#include <memory>
#include <filesystem>

#include "MiniJavaParser.h"
#include "MiniJavaParserTree.h"
#include "MiniJavaParserTokenManager.h"
#include "ErrorHandler.h"
#include "ParseException.h"

#include "utils.h"
#include "logger/Logger.h"

int main(int argc, char* argv[]) {
    std::filesystem::path testFilePath = "../testing_files/Week_1_2/SimpleClass.java";
    std::string fileContent = utils::readStringFromFile(testFilePath);

    try {    
        auto stream = std::make_unique<CharStream>(fileContent.c_str(), fileContent.size(), 0, 0);
        auto scanner = std::make_unique<MiniJavaParserTokenManager>(stream.get());
        MiniJavaParser parser(scanner.get());
        parser.setErrorHandler(new ErrorHandler());
        parser.Program();

        logger::log(logger::log_level::Info, "Parsing finished successfully");

    } catch (ParseException& e) {
        logger::log(logger::log_level::Error, "Parse exception");
    }
    catch(...) {
        logger::log(logger::log_level::Error, "Unknown exception");
    }

    return 0;
}