#ifndef CODEWARS_TESTS_EQUALSIDESOFANARRAY_CPP_
#define CODEWARS_TESTS_EQUALSIDESOFANARRAY_CPP_
#include <CodeWars/EqualSidesOfAnArray.hpp>
#include <gtest/gtest.h>
#include <iostream>

struct testCase {
  vector<int> numbers;
  int expected;
};

vector<testCase> testCases = {
    {{1, 2, 3, 4, 3, 2, 1}, 3},
    {{1, 100, 50, -51, 1, 1}, 1},
    {{1, 2, 3, 4, 5, 6}, -1},
    {{20, 10, 30, 10, 10, 15, 35}, 3},
    {{20, 10, -80, 10, 10, 15, 35}, 0},
    {{10, -80, 10, 10, 15, 35, 20}, 6},
    {{0, 0, 0, 0, 0}, 0},
    {{-1, -2, -3, -4, -3, -2, -1}, 3},
};

TEST(EqualSidesOfAnArrayTests, VectorSummTest) {
  EXPECT_EQ(vectorSum({1, 2, 3}), 6);
}

TEST(EqualSidesOfAnArrayTests, GetNumbersPairTest) {
  EXPECT_EQ(getNumbersPair(testCases[0].numbers, 3),
            make_pair(vector<int>({1, 2, 3}), vector<int>({3, 2, 1})));

  EXPECT_EQ(getNumbersPair(testCases[0].numbers, 0),
            make_pair(vector<int>(), vector<int>({2, 3, 4, 3, 2, 1})));

  EXPECT_EQ(getNumbersPair({-1, -2, -3, -4, -3, -2, -1}, 3),
            make_pair(vector<int>({-1, -2, -3}), vector<int>({-3, -2, -1})));
}

TEST(EqualSidesOfAnArrayTests, FindEvenIndexTest) {
  for (auto &tc : testCases) {
    EXPECT_EQ(find_even_index(tc.numbers), tc.expected);
  }
}

#endif // CODEWARS_TESTS_EQUALSIDESOFANARRAY_CPP_