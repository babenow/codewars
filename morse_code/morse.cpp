#include <CodeWars/MorseCode.hpp>
#include <iostream>
#include <regex>
#include <vector>

std::string decodeMorse(std::string mc) {
  std::vector<std::string> result;
  std::regex morseRegex("(([\\.\\-]+)(\\s{1})?)(\\s{2})?");
  std::smatch matches;
  auto begin = mc.cbegin();
  auto end = mc.cend();
  
  while (std::regex_search(begin, end, matches, morseRegex)) {
    result.push_back(matches[2].str());
    if (matches[4].matched) {
      result.push_back(matches[4].str());
    }
    begin += matches.position() + matches.length();
  }
  
  return "";
}
