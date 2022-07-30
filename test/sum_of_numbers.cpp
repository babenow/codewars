#include <CodeWars/SumOfNumbers.hpp>
#include <gtest/gtest.h>

TEST(SumOfNumbersTest, GetSumTest) {
  ASSERT_EQ(get_sum(5, -1), 14);
  ASSERT_EQ(get_sum(550, 414), 66034);
}