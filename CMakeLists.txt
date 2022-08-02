cmake_minimum_required(VERSION 3.16)

project(CodeWars)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)

add_subdirectory(external/googletest)

add_subdirectory(wholikethis)
add_subdirectory(parity_outlier)
add_subdirectory(sum_of_numbers)
add_subdirectory(equal_sides_of_an_array)
add_subdirectory(hanoi_record)
add_subdirectory(find_the_odd_int)
add_subdirectory(consecutive_strings)
add_subdirectory(narcissic_numbers)
add_subdirectory(tortoise_race)
add_subdirectory(morse_code)
add_subdirectory(counting_duplicates)
add_subdirectory(take_ten_minutes_walk)


add_subdirectory(test)
