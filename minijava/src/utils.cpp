#include "utils.h"

#include <fstream>
#include "logger/Logger.h"

#include "MiniJavaParser.h"
#include "MiniJavaParserTree.h"
#include "MiniJavaParserTokenManager.h"
#include "ErrorHandler.h"
#include "ParseException.h"

#include "ast/GraphvizPrinterVisitor.h"

std::string utils::readStringFromFile(const std::filesystem::path& path)
{
    if (!std::filesystem::exists(path))
    {
        std::cerr << "File " << path << " does not exist" << std::endl;
        exit(1);
    }

    if(!std::filesystem::is_regular_file(path))
    {
        std::cerr << "File " << path << " is not a regular file" << std::endl;
        exit(1);
    }

    std::ifstream inputFile(path.c_str());

    if(!inputFile.is_open())
    {
        std::cerr << "Could not open file " << path << std::endl;
        exit(1);
    }

    std::string buffer;
    while(inputFile)
    {
        std::string line;
        std::getline(inputFile, line);
        buffer += line + "\n";
    }

    return buffer;
}

void utils::cleanUpVisuliazerFiles()
{
    std::filesystem::path path = std::filesystem::current_path().parent_path();
    path /= "generated";
    if (!std::filesystem::exists(path)) {
        logger::log(logger::log_level::Warning, "Could not find generated folder");
        return;
    }

    path /= "astVisual";
    if (!std::filesystem::exists(path)) {
        logger::log(logger::log_level::Info, "Could not find ast visulisation folder");
        return;
    }

    std::filesystem::remove_all(path);
}

int utils::parseAndReportErrorsFromFile(const std::filesystem::path& file)
{
    std::string fileContent = utils::readStringFromFile(file);

    try {    
        auto stream = std::make_unique<CharStream>(fileContent.c_str(), fileContent.size(), 0, 0);
        auto scanner = std::make_unique<MiniJavaParserTokenManager>(stream.get());
        MiniJavaParser parser(scanner.get());
        auto errorHandler = new ErrorHandler();
        parser.setErrorHandler(errorHandler);
        SimpleNode* n = parser.Program();
        if (n)
        {
            n->dump("");
        }

        ast::GraphvizPrinterVisitor visitor("test");
        n->jjtAccept(&visitor, nullptr);
        visitor.closeGraph();
        visitor.writeToFile();
        visitor.generateImage();
        
        logger::log(logger::log_level::Info, "Parsing finished successfully");
        return errorHandler->getErrorCount();

    } catch (ParseException& e) {
        logger::log(logger::log_level::Error, "Parse exception");
        return -1;
    }
    catch(...) {
        logger::log(logger::log_level::Error, "Unknown exception");
        return -1;
    }

    return -1;   
}