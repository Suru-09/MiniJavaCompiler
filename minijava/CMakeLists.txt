cmake_minimum_required(VERSION 3.22)

project(MiniJavaCompiler VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

# Generate parser
set(PARSER_JAVACC_FILE "${CMAKE_SOURCE_DIR}/generate_parser.sh")

# # Use the execute_process command to run the script
execute_process(
    COMMAND "${PARSER_JAVACC_FILE}"
    RESULT_VARIABLE GEN_RESULT
    OUTPUT_VARIABLE GEN_OUTPUT
    ERROR_VARIABLE GEN_ERROR
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/"
)


if(GEN_RESULT EQUAL 0)
    message("Script executed successfully. Output: ${GEN_OUTPUT}")
else()
    message("Script execution failed with error code ${GEN_RESULT}. Error: ${GEN_ERROR}")
endif()

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