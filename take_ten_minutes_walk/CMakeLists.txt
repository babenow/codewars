cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME_TEST TenMinutesWalkTests)
project(TenMinutesTests)

set(headers
    "../include/CodeWars/TakeTenMinutesWalk.hpp"
)

set(sources
    "walk.cpp"
)

add_library(${PROJECT_NAME} STATIC ${headers} ${sources})

add_executable(${PROJECT_NAME_TEST} "walk_test.cpp")
target_link_libraries(${PROJECT_NAME_TEST} PUBLIC gtest_main ${PROJECT_NAME})

add_test(
    NAME ${PROJECT_NAME_TEST}
    COMMAND ${PROJECT_NAME_TEST}
)

set_target_properties(${PROJECT_NAME_TEST} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)