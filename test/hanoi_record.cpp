#ifndef CODEWARS_HANOIRECORD_CPP_
#define CODEWARS_HANOIRECORD_CPP_
#include <CodeWars/HanoiRecord.hpp>
#include <gtest/gtest.h>
#include <vector>

struct hanoiTestCase {
  unsigned disks;
  unsigned long long expected;
};

std::vector<hanoiTestCase> hanoiTestCases = {
    {1, 1}, {2, 3}, {3, 7}, {5, 31}, {10, 1023}, {20, 1048575},
};

TEST(HanoiRecordTests, HanoiTests) {
  for (auto &tc : hanoiTestCases) {
    EXPECT_EQ(hanoi(tc.disks), tc.expected);
  }
}

#endif // CODEWARS_HANOIRECORD_CPP_