cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

add_executable(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/InfixVisitor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PostfixVisitor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/EvaluatorVisitor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_NAME}-generated
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${INCL_DIR}
        ${CMAKE_SOURCE_DIR}/include/
        ${CMAKE_SOURCE_DIR}/generated/
)

target_compile_options(${PROJECT_NAME}
    PRIVATE
        ${CXX_FLAGS}
)