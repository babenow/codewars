cmake_minimum_required(VERSION 3.16)

set(TESTS_NAME DirectionReductionTests)
project(DirectionReductions)

set(headers 
    "../include/CodeWars/DirectionReduction.hpp"
)

set(sources
    "dir_reduction.cpp"
)

add_library(${PROJECT_NAME} STATIC ${headers} ${sources})

add_executable(${TESTS_NAME} "dir_reduction_test.cpp")
target_link_libraries(${TESTS_NAME} PUBLIC gtest_main ${PROJECT_NAME})

add_test(
    NAME ${TESTS_NAME}
    COMMAND ${TESTS_NAME}
)


set_target_properties(${TESTS_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)