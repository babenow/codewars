#include <CodeWars/CountingDuplicates.hpp>
#include <gtest/gtest.h>
#include <string>
#include <vector>

struct duplicate_test_case {
  std::string in;
  size_t expected;
};

std::vector<duplicate_test_case> testCases = {
    {" ", 0},
    {"", 0},
    {"aabbcde", 2},
    {"aabBcde", 2},
    {"Indivisibility", 1},
    {"Indivisibilities", 2},
    {"ABBA", 2},
};

TEST(CountingDuplicateTests, duplicatesCount_test) {
  for (auto &tc : testCases) {
    EXPECT_EQ(duplicateCount(tc.in.c_str()), tc.expected);
  }
}
