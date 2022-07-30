cmake_minimum_required(VERSION 3.16)

project(CodeWarsTests)

enable_testing()


set(Sources 
    wholikethis_test.cpp
    parity_outlier.cpp
    sum_of_numbers.cpp
)

add_executable(${PROJECT_NAME} ${Sources})

target_link_libraries(${PROJECT_NAME} PUBLIC 
                        gtest_main 
                        wholikethis 
                        FindTheParityOutlier
                        SumOfNumbers
                    )

add_test(
    NAME ${PROJECT_NAME}
    COMMAND ${PROJECT_NAME}
)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
