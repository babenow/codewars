cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME_TEST NarcissicNumbersTests)

project(NarcissicNumbers)
enable_testing()

set(headers
"../include/CodeWars/NarcissicNumber.hpp"
)

set(sources "NarcissicNumber.cpp")

add_library(${PROJECT_NAME} STATIC ${headers} ${sources})

# TESTS
add_executable(${PROJECT_NAME_TEST} "NarcissicNumber_Test.cpp")

target_link_libraries(${PROJECT_NAME_TEST} PUBLIC gtest_main ${PROJECT_NAME})

add_test(
    NAME ${PROJECT_NAME_TEST}
    COMMAND ${PROJECT_NAME_TEST}
)

set_target_properties(${PROJECT_NAME_TEST} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)