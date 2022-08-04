#include <CodeWars/BackspacesInString.hpp>
#include <gtest/gtest.h>

#include <vector>

struct backspaces_in_string_test_case {
  std::string in;
  std::string expected;
};

std::vector<backspaces_in_string_test_case> testCases = {
    {"abc#d##c", "ac"},
    {"abc####d##c#", ""},
};

TEST(BackspascesInStringTests, cleanString_test) {
  for (auto &tc : testCases) {
    EXPECT_EQ(cleanString(tc.in), tc.expected);
  }
}