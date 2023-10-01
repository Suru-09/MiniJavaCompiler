#include "utils.h"

#include <fstream>

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