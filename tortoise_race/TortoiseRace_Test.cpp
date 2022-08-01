#include <CodeWars/TortoiseRace.hpp>
#include <gtest/gtest.h>

struct TortoiseRace_TestCase {
  int v1;
  int v2;
  int g;
  RaceVec expected;
};

std::vector<TortoiseRace_TestCase> testCases = {
    {720, 850, 70, {0, 32, 18}},
    {820, 81, 37, {-1, -1, -1}},
    {80, 91, 37, {3, 21, 49}},
};

TEST(TortoiseRaseTests, race_test) {
    for(auto &tc : testCases) {
        EXPECT_EQ(Tortoise::race(tc.v1, tc.v2, tc.g), tc.expected);
    }
}