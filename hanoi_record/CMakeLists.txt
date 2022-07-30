cmake_minimum_required(VERSION 3.16)

project(HanoiRecord)

set(HEADERS
    "../include/CodeWars/HanoiRecord.hpp"
)

set(SOURCES
    "Hanoi.cpp"
)

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})