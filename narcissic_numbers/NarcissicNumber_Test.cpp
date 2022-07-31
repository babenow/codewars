#include <CodeWars/NarcissicNumber.hpp>
#include <gtest/gtest.h>
#include <vector>

struct NarcissicNumber_TestCase {
  int number;
  bool expected;
};

std::vector<NarcissicNumber_TestCase> testCases = {
    {7, true},
    {371, true},
    {122, false},
    {4887, false},
};

TEST(NarcissicNumbersTests, nercissic_test) {
  for (auto &tc : testCases) {
    if (tc.expected) {
      EXPECT_TRUE(narcissistic(tc.number));
    } else {
      EXPECT_FALSE(narcissistic(tc.number));
    }
  }
}
