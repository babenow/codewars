cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME_TEST MorseCodeTests)
project(MorseCode)

set(headers
"../include/CodeWars/MorseCode.hpp"
)

set(sources
"morse.cpp"
)

add_library(${PROJECT_NAME} STATIC ${headers} ${sources})

add_executable(${PROJECT_NAME_TEST} "morse_test.cpp")
target_link_libraries(${PROJECT_NAME_TEST} PUBLIC gtest_main ${PROJECT_NAME})

add_test(
    NAME ${PROJECT_NAME_TEST}
    COMMAND ${PROJECT_NAME_TEST}
)

set_target_properties(${PROJECT_NAME_TEST} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)