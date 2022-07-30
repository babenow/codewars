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

target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>  
)


