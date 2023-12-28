cmake_minimum_required(VERSION 3.22)

project(PostfixVisitor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

# change from default CLion output directory to my preferred one
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/)

# Check if a C++ compiler is available
if(CMAKE_CXX_COMPILER)
    message(STATUS "[PM]C++ compiler found: ${CMAKE_CXX_COMPILER}")

    # Get C++ compiler version
    execute_process(
        COMMAND ${CMAKE_CXX_COMPILER} --version
        OUTPUT_VARIABLE compiler_version
    )
    string(REGEX MATCH "[0-9]+\\.[0-9]+\\.[0-9]+" compiler_version "${compiler_version}")
    message(STATUS "[PM]C++ compiler version: ${compiler_version}")
else()
    message(FATAL_ERROR "C++ compiler not found. Please install a C++ compiler.")
endif()

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
    message(STATUS "Script executed successfully.Output:\n${GEN_OUTPUT}")
else()
    message(FATAL_ERROR "Script execution failed with error code ${GEN_RESULT}. Error:\n${GEN_ERROR}")
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