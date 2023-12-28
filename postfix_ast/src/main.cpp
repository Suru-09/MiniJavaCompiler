#include <iostream>
#include <filesystem>
#include <fstream>

#include "PostfixParser.h"
#include "PostfixParserTree.h"
#include "PostfixParserTokenManager.h"
#include "ErrorHandler.h"
#include "ParseException.h"


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
        auto scanner = std::make_unique<PostfixParserTokenManager>(stream.get());
        PostfixParser parser(scanner.get());
        auto errorHandler = new ErrorHandler();
        parser.setErrorHandler(errorHandler);
        SimpleNode* n = parser.Start();
        if (n)
        {
            n->dump("");
        }

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