#include <CodeWars/HigestScoringWord.hpp>
#include <gtest/gtest.h>

struct higest_scores_words_test_case {
  std::string input;
  std::string expected;
};

std::vector<higest_scores_words_test_case> testCases = {
    {"man i need a taxi up to ubud", "taxi"},
    {"what time are we climbing up the volcano", "volcano"},
    {"take me to semynak", "semynak"},
    {"massage yes massage yes massage", "massage"},
    {"take two bintang and a dance please", "bintang"},
    {"aa b", "aa"},
};

TEST(HigestSciringWordTests, getWordsMap_test) {
  EXPECT_EQ(getWordsMap("one two"), WordsMap({"one", "two"}));
}

TEST(HigestSciringWordTests, getWordScore_test) {
  EXPECT_EQ(getWordScore("abc"), 6);
}

TEST(HigestScoringWordTests, higestScorringWord_test) {
  for (auto &tc : testCases) {
    EXPECT_EQ(highestScoringWord(tc.input), tc.expected);
  }
}
