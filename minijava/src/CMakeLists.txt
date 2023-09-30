cmake_minimum_required(VERSION 3.22)

add_executable(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

# Linking library to executable
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