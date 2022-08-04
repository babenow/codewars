cmake_minimum_required(VERSION 3.16)

set(TESTS BackspacesInStringTests)
project(BackspacesInString)

set(HEADERS
    "../include/CodeWars/BackspacesInString.hpp"
)

set(SOURCES
    "backspaces_in_string.cpp"
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})

add_executable(${TESTS} "backspaces_in_string_test.cpp")
target_link_libraries(${TESTS} PUBLIC gtest_main ${PROJECT_NAME})

add_test(
    NAME ${TESTS}
    COMMAND ${TESTS}
)

set_target_properties(${TESTS} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/
)
