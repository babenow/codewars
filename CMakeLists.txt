cmake_minimum_required(VERSION 3.16)

project(CodeWars)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(external/googletest)

add_subdirectory(wholikethis)


add_subdirectory(test)
