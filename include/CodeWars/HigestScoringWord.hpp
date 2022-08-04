#ifndef CODEWARS_GIGESTSCORRINGWORD_HPP_
#define CODEWARS_GIGESTSCORRINGWORD_HPP_

#include <string>
#include <unordered_map>
#include <vector>

static std::unordered_map<char, unsigned int> SCORES_MAP{
    {'a', 1},  {'b', 2},  {'c', 3},  {'d', 4},  {'e', 5},  {'f', 6},  {'g', 7},
    {'h', 8},  {'i', 9},  {'j', 10}, {'k', 11}, {'l', 12}, {'m', 13}, {'n', 14},
    {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19}, {'t', 20}, {'u', 21},
    {'v', 22}, {'w', 23}, {'x', 24}, {'y', 25}, {'z', 26},
};

typedef std::vector<std::string> WordsMap;

WordsMap getWordsMap(const std::string &str);
int getWordScore(const std::string& word);

std::string highestScoringWord(const std::string &str);

#endif // CODEWARS_GIGESTSCORRINGWORD_HPP_
