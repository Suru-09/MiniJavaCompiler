cmake_minimum_required(VERSION 3.22)

# Finding all generated files by JavaCC
file(GLOB_RECURSE GENERATED_FILES
    ${CMAKE_SOURCE_DIR}/parser_generated_files/*.cc
    ${CMAKE_SOURCE_DIR}/parser_generated_files/*.h
)

# avoid having main.cpp's in this list.
list(FILTER GENERATED_FILES EXCLUDE REGEX "main.cpp")


add_library(${PROJECT_NAME}-generated
    ${GENERATED_FILES}
)

add_executable(${PROJECT_NAME}
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_compile_options(${PROJECT_NAME}
    PUBLIC
        ${MY_CPP_FLAGS}
)

# Include for both library and executable
target_include_directories(${PROJECT_NAME}-generated
    PRIVATE 
        ${INCLUDE_DIRS}
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${INCLUDE_DIRS}
)

# Linking library to executable
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    ${PROJECT_NAME}-generated
)
