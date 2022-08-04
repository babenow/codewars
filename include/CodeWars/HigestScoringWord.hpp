#ifndef CODEWARS_GIGESTSCORRINGWORD_HPP_
#define CODEWARS_GIGESTSCORRINGWORD_HPP_

#include <string>
#include <unordered_map>
#include <vector>

typedef std::vector<std::string> WordsMap;

WordsMap getWordsMap(const std::string &str);
int getWordScore(const std::string& word);
std::string highestScoringWord(const std::string &str);

#endif // CODEWARS_GIGESTSCORRINGWORD_HPP_
