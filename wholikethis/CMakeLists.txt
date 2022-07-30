cmake_minimum_required(VERSION 3.16)

project(WhoLikeThis)

set(CMAKE_CXX_STANDARD 20)



set(Headers
  "../include/CodeWars/WhoLikeThis.hpp"
)
set(Sources
    wholikethis.cpp
)

add_library(wholikethis STATIC ${Headers} ${Sources})

target_include_directories(wholikethis PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>  
)



