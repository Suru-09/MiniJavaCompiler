cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(TEST_SOURCES
    MiniJavaParsingTest.cpp
)

add_executable(${PROJECT_NAME}-test
    main.cpp
    ${TEST_SOURCES}
)

# Linking library to executable
target_link_libraries(${PROJECT_NAME}-test
    PRIVATE
        ${PROJECT_NAME}-generated
        ${PROJECT_NAME}-ast
        gtest
        gtest_main
)

target_include_directories(${PROJECT_NAME}-test
    PUBLIC
        ${INCL_DIR}
        ${gtest_SOURCE_DIR}/include 
        ${gtest_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/include/
        ${CMAKE_SOURCE_DIR}/generated/
)

target_compile_options(${PROJECT_NAME}-test
    PRIVATE
        ${CXX_FLAGS}
)