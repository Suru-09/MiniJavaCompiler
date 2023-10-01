cmake_minimum_required(VERSION 3.22)

project(MiniJavaCompiler LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

# Generate parser
set(PARSER_JAVACC_FILE "${CMAKE_SOURCE_DIR}/generate_parser.sh")

# Use the execute_process command to run the script
execute_process(
    COMMAND "${PARSER_JAVACC_FILE}"
    RESULT_VARIABLE GEN_RESULT
    OUTPUT_VARIABLE GEN_OUTPUT
    ERROR_VARIABLE GEN_ERROR
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/"
)

set (CMAKE_INCLUDE_CURRENT_DIR ON)


if(GEN_RESULT EQUAL 0)
    message("Script executed successfully. Output: ${GEN_OUTPUT}")
else()
    message("Script execution failed with error code ${GEN_RESULT}. Error: ${GEN_ERROR}")
endif()

set(CXX_FLAGS 
    -O3
    -Wall
)

set(INCL_DIR
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/generated
)

MESSAGE(STATUS "Include dirs: ${INCL_DIR}")

add_subdirectory(src)
add_subdirectory(generated)