#include <CodeWars/FindOddInt.hpp>
#include <gtest/gtest.h>

struct findoddTestCase {
  std::vector<int> numbers;
  int expected;
};

std::vector<findoddTestCase> findOddTestCases = {
    {{20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4, 20, 4, -1, -2, 5}, 5},
    {{1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5}, -1},
    {{20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5}, 5},
    {{10}, 10},
    {{1, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1}, 10},
};

TEST(FindOddIntTests, getCountEntriesTest) {
  EXPECT_EQ(getCountEntries(std::vector<int>({1, 2, 1, 1}), 1), 3);
}

TEST(FindOddInt_Test, findIntTest) {
  for (auto &tc : findOddTestCases) {
    EXPECT_EQ(findOdd(tc.numbers), tc.expected);
  }
}
