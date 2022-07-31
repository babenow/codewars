cmake_minimum_required(VERSION 3.16)
set(PROJECT_NAME_TEST FindOddIntTests)

project(FindOddInt)

enable_testing()

set(HEADERS
"../include/CodeWars/FindOddInt.hpp"
)

set(SOURCES
    "FindOdd.cpp"
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})

add_executable(${PROJECT_NAME_TEST} "FindOdd_Test.cpp")

target_link_libraries(${PROJECT_NAME_TEST} PUBLIC gtest_main ${PROJECT_NAME})

add_test(
    NAME ${PROJECT_NAME_TEST}
    COMMAND ${PROJECT_NAME_TEST}
)

set_target_properties(${PROJECT_NAME_TEST} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
