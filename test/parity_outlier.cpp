#include <CodeWars/FindTheParityOutlier.hpp>
#include <gtest/gtest.h>

TEST(FindTheParityOutlier, TestFindOutlier) {
  EXPECT_EQ(FindOutlier({2, 3, 4}), 3);
  ASSERT_EQ(FindOutlier({1, 2, 3}), 2);
  ASSERT_EQ(FindOutlier({4, 1, 3, 5, 9}), 4);
}