cmake_minimum_required(VERSION 3.16)

project(SumOfNumbers)

set(CMAKE_CXX_STANDARD 17)

set(HEADERS
    "../include/CodeWars/SumOfNumbers.hpp"
)

set(SOURCES
    "SumOfNumbers.cpp"
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})