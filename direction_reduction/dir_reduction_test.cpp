#include <CodeWars/DirectionReduction.hpp>
#include <gtest/gtest.h>

struct dir_reduction_test_case {
  DirectionsArr directions;
  DirectionsArr expected;
};

std::vector<dir_reduction_test_case> testCases = {
    {{"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"}, {"WEST"}},
    {{"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "NORTH"}, {"NORTH"}},
    {
        { "WEST", "NORTH", "NORTH", "NORTH", "NORTH", "NORTH", "WEST", "SOUTH",
         "WEST", "SOUTH", "SOUTH", "EAST", "SOUTH", "SOUTH"},
        {"WEST", "NORTH", "NORTH", "NORTH", "NORTH", "NORTH", "WEST", "SOUTH",
         "WEST", "SOUTH", "SOUTH", "EAST", "SOUTH", "SOUTH"},
    },
};

TEST(DirectionReductionsTests, dirReduction_test) {
  for (auto &tc : testCases) {
    EXPECT_EQ(DirReduction::dirReduction(tc.directions), tc.expected);
  }
}

TEST(DirectionReductionTests, isOpposite_test) {
  EXPECT_EQ(DirReduction::isOpposite("NORTH", "SOUTH"), true);
  EXPECT_EQ(DirReduction::isOpposite("SOUTH", "NORTH"), true);
}
