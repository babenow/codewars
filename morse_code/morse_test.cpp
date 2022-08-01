#include <CodeWars/MorseCode.hpp>
#include <gtest/gtest.h>
#include <vector>

struct morse_test_case {
  std::string mc;
  std::string expected;
};

std::vector<morse_test_case> testCases = {
    {"... --- ...", "SOS"},
    {".... . -.--   .--- ..- -.. .", "HEY JUDE"},
};

TEST(MorseCodeTests, decodeMorse_test) {
  for (auto &tc : testCases) {
    EXPECT_EQ(decodeMorse(tc.mc), tc.expected);
  }
}
