#include <CodeWars/TakeTenMinutesWalk.hpp>
#include <gtest/gtest.h>

struct walk_test_case {
  std::vector<char> walk;
  bool expected;
};

std::vector<walk_test_case> testCases = {
    {{'n'}, false},
    {{'n', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's'}, true},
    {{'n', 's'}, false},
    {{'n', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's'}, false},
    {{'e', 'w', 'e', 'w', 'n', 's', 'n', 's', 'e', 'w'}, true},
    {{'n', 's', 'e', 'w', 'n', 's', 'e', 'w', 'n', 's', 'e', 'w', 'n', 's', 'e',
      'w'},
     false},
    {{'n', 's', 'e', 'w', 'n', 's', 'e', 'w', 'n', 's'}, true},
    {{'s', 'e', 'w', 'n', 'n', 's', 'e', 'w', 'n', 's'}, true},
    {{'n', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 'n'}, false},
    {{'e', 'e', 'e', 'w', 'n', 's', 'n', 's', 'e', 'w'}, false},
};

TEST(TakeTenMinutesWalkTests, isValidWalk_test) {
    for(auto &tc : testCases) {
        EXPECT_EQ(isValidWalk(tc.walk), tc.expected);
    }
}