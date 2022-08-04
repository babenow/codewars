cmake_minimum_required(VERSION 3.16)

set(TESTS HigestScoresWordsTests)
project(HigestScoresWords)

set(HEADERS "../include/CodeWars/HigestScoringWord.hpp")
set(SOURCES "higest_scores_words.cpp")

add_library(${PROJECT_NAME} STATIC ${HEADERS} ${SOURCES})


add_executable(${TESTS} "higest_scores_words_test.cpp")
target_link_libraries(${TESTS} PRIVATE gtest_main ${PROJECT_NAME})

add_test(
    NAME ${TESTS}
    COMMAND ${TESTS}
)
 
set_target_properties(${TESTS} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/
)
