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

TEST_F(MiniJavaParsingTest, VariableClassMethodDeclaration)
{
    std::filesystem::path testFilePath = testResourcesPath / "VariableClassMethodDeclaration.java";
    ASSERT_EQ(utils::parseAndReportErrorsFromFile(testFilePath, "VariableClassMethodDeclarationTest", false), 0);
}

TEST_F(MiniJavaParsingTest, ExpressionTest)
{
    std::filesystem::path testFilePath = testResourcesPath / "ExpressionTest.java";
    ASSERT_EQ(utils::parseAndReportErrorsFromFile(testFilePath, "ExpressionTest", false), 0);
}

TEST_F(MiniJavaParsingTest, StatementsTest)
{
    std::filesystem::path testFilePath = testResourcesPath / "Statements.java";
    ASSERT_EQ(utils::parseAndReportErrorsFromFile(testFilePath, "ComprehensiveTest", false), 0);
}
