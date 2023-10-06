cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

add_library(${PROJECT_NAME}-ast
    ${CMAKE_CURRENT_SOURCE_DIR}/GraphvizPrinterVisitor.cpp
)

target_include_directories(${PROJECT_NAME}-ast
    PUBLIC 
        ${INCL_DIR}
)

target_compile_options(${PROJECT_NAME}-ast
    PRIVATE
        ${CXX_FLAGS}
)
