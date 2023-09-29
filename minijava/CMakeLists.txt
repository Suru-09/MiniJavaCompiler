cmake_minimum_required(VERSION 3.22)

project(MiniJavaCompiler VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED 14)

add_subdirectory(src)


set(MY_CPP_FLAGS
    -Wall
    -pedantic
    -o3
)

set(INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/parser_generated_files
)