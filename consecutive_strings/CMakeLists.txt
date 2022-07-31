cmake_minimum_required(VERSION 3.16)
set(THIS LongestConsec)
set(THIS_TEST LongestConsecTests)

project(${THIS})

set(HEADERS
"../include/CodeWars/ConsecutiveStrings.hpp"
)

set(SOURCES "ConsecutiveStrings.cpp")

add_library(${THIS} STATIC ${HEADERS} ${SOURCES})

add_executable(${THIS_TEST} "ConsecutiveStrings_Test.cpp")

target_link_libraries(${THIS_TEST} PUBLIC gtest_main ${THIS})

add_test(
    NAME ${THIS_TEST}
    COMMAND ${THIS_TEST}
)

set_target_properties(${THIS_TEST} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)