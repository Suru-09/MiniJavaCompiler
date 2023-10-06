cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

add_executable(${PROJECT_NAME}-test
    main.cpp
    ${CMAKE_SOURCE_DIR}/src/Utils.cpp
    ${CMAKE_SOURCE_DIR}/src/logger/Logger.cpp
    MiniJavaParsingTest.cpp
)

# Linking library to executable
target_link_libraries(${PROJECT_NAME}-test
    PUBLIC
        ${PROJECT_NAME}-ast
        ${PROJECT_NAME}-generated
        gtest
        gtest_main
)

target_include_directories(${PROJECT_NAME}-test
    PUBLIC
        ${INCL_DIR}
        ${gtest_SOURCE_DIR}/include 
        ${gtest_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/generated
)

target_compile_options(${PROJECT_NAME}-test
    PRIVATE
        ${CXX_FLAGS}
)