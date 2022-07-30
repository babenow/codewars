cmake_minimum_required(VERSION 3.16)

project(FindTheParityOutlier)

set(CMAKE_CXX_STANDARD 20)

set(Headers
    "../include/CodeWars/FindTheParityOutlier.hpp"
)
set(Sources
    "main.cpp"
)

add_library(${PROJECT_NAME} STATIC ${Headers} ${Sources})




