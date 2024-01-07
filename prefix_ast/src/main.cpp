#include <iostream>
#include <filesystem>
#include <fstream>

#include "PrefixParser.h"
#include "PrefixParserTree.h"
#include "PrefixParserTokenManager.h"
#include "ErrorHandler.h"
#include "ParseException.h"

#include "InfixVisitor.h"
#include "PrefixVisitor.h"
#include "EvaluatorVisitor.h"


std::string readStringFromFile(const std::filesystem::path& path)
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

int main() {
    std::string fileContent = readStringFromFile("../testing_files/example.txt");

    try {    
        auto stream = std::make_unique<CharStream>(fileContent.c_str(), fileContent.size(), 0, 0);
        auto scanner = std::make_unique<PrefixParserTokenManager>(stream.get());
        PrefixParser parser(scanner.get());
        auto errorHandler = new ErrorHandler();
        parser.setErrorHandler(errorHandler);
        SimpleNode* n = parser.Start();
        if (n)
        {
            n->dump("");
        }

        std::cout << " \n\nInfixVisitor: \n";
        visitors::InfixVisitor infixVisitor;
        n->jjtAccept(&infixVisitor, nullptr);

        std::cout << "\nPrefixVisitor: \n";
        visitors::PrefixVisitor PrefixVisitor;
        n->jjtAccept(&PrefixVisitor, nullptr);

        visitors::EvaluatorVisitor evaluatorVisitor;
        n->jjtAccept(&evaluatorVisitor, nullptr);
        std::cout << "\nEvaluator:\n" << evaluatorVisitor.getValue() << "\n";

        if(errorHandler->getErrorCount() > 0)
        {
            return errorHandler->getErrorCount();
        }

        return errorHandler->getErrorCount();

    } catch (ParseException& e) {
        return -1;
    }
    catch(std::exception& ex) {
        return -1;
    }
    catch(...) {
        return -1;
    }

    return -1;   
}