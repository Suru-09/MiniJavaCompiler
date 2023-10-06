#include "gtest/gtest.h"

#include <iostream>
#include <memory>
#include <filesystem>
#include <string>

#include "utils.h"

class MiniJavaParsingTest : public ::testing::Test
{
    void setUp()
    {
    }

    void tearDown()
    {
    }

public:
    const std::filesystem::path testResourcesPath = "../test/testResources/";
};


TEST_F(MiniJavaParsingTest, AssertSomeValue)
{
    ASSERT_TRUE(true);
}

TEST_F(MiniJavaParsingTest, MainClassDeclaration)
{
    std::filesystem::path testFilePath = testResourcesPath / "MainClassDeclaration.java";
    ASSERT_EQ(utils::parseAndReportErrorsFromFile(testFilePath, "MainClassDeclarationTest", false), 0);
}

