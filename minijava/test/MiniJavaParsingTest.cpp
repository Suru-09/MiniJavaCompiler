#include "gtest/gtest.h"

#include <iostream>
#include <memory>
#include <filesystem>
#include <string>

#include "utils.h"
#include "logger/Logger.h"

class MiniJavaParsingTest : public ::testing::Test
{
    void setUp()
    {
    }

    void tearDown()
    {
    }

public:

};


TEST_F(MiniJavaParsingTest, AssertSomeValue)
{
    ASSERT_TRUE(true);
}

TEST_F(MiniJavaParsingTest, MainClassDeclaration)
{
    std::filesystem::path testFilePath = "../testResources/MainClassDeclaration.java";
    logger::log(logger::log_level::Info, "Parsing file: " + testFilePath.string());
    // utils::readStringFromFile(testFilePath);
    // ASSERT_EQ(utils::parseAndReportErrorsFromFile(testFilePath), 0);
    ASSERT_TRUE(true);
}

