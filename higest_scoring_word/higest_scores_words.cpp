#include <CodeWars/HigestScoringWord.hpp>
#include <regex>

WordsMap getWordsMap(const std::string &str) {
  WordsMap words;
  std::regex wordsRegex("\\w+");
  std::smatch wordMatches;
  auto begin = str.cbegin();
  while (std::regex_search(begin, str.cend(), wordMatches, wordsRegex)) {
    words.push_back(wordMatches[0].str());
    begin += wordMatches.position() + wordMatches.length();
  }
  return words;
}

int getWordScore(const std::string &word) {
  int score = 0;
  for (char ch : word) {
    score += int(ch) - 96;
  }
  return score;
}

std::string highestScoringWord(const std::string &str) {
  std::string result;
  WordsMap words = getWordsMap(str);
  std::pair<std::string, int> higest = std::make_pair("", 0);
  for (auto word : words) {
    int wordScore = getWordScore(word);
    if (wordScore > higest.second) {
      higest = std::make_pair(word, wordScore);
    }
  }
  return higest.first;
}
