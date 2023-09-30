cmake_minimum_required(VERSION 3.22)

# Finding all generated files by JavaCC
file(GLOB_RECURSE GENERATED_FILES
    ${CMAKE_SOURCE_DIR}/generated/*.cc
)

# avoid having main.cpp's in this list.
list(FILTER GENERATED_FILES EXCLUDE REGEX "main.cpp")


add_library(${PROJECT_NAME}-generated
    ${GENERATED_FILES}
)

target_include_directories(${PROJECT_NAME}-generated
    PUBLIC 
        ${INCL_DIR}
)
