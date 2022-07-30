cmake_minimum_required(VERSION 3.16)

project(EqualSidesOfAnArray)

set(HEADERS
    "../include/CodeWars/EqualSidesOfAnArray.hpp"
)

set(SOURCES
    "EqualSidesOfAnArray.cpp"
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})