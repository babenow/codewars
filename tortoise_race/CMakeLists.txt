cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME_TEST TortoiseRaceTests)
project(TortoiseRace)

set(HEADERS
"../include/CodeWars/TortoiseRace.hpp"
)

set(SOURCES
"TortoiseRace.cpp"
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})

add_executable(${PROJECT_NAME_TEST} "TortoiseRace_Test.cpp")
target_link_libraries(${PROJECT_NAME_TEST} PUBLIC gtest_main ${PROJECT_NAME})

add_test(
    NAME ${PROJECT_NAME_TEST}
    COMMAND ${PROJECT_NAME_TEST}
)

set_target_properties(${PROJECT_NAME_TEST} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)