#include <CodeWars/ConsecutiveStrings.hpp>
#include <gtest/gtest.h>
struct consecutiveStringTestCase {
  StringVec strarr;
  size_t k;
  std::string expected;
};

std::vector<consecutiveStringTestCase> testCases = {
    {{"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"},
     2,
     "abigailtheta"},
    {{"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb",
      "oocccffuucccjjjkkkjyyyeehh"},
     1,
     "oocccffuucccjjjkkkjyyyeehh"},

};

TEST(ConsecutiveStringsTest, longestConsecTest) {
  for (auto &tc : testCases) {
    EXPECT_EQ(LongestConsec::longestConsec(tc.strarr, tc.k), tc.expected);
  }
}