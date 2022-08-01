#include <CodeWars/MorseCode.hpp>
#include <regex>
#include <vector>

std::string decodeMorse(std::string mc) {
  std::vector<std::string> chars;
  std::string result = "";
  std::regex morseRegex("(([\\.\\-]+)(\\s{1})?)(\\s{2})?");
  std::smatch matches;
  auto begin = mc.cbegin();
  auto end = mc.cend();

  while (std::regex_search(begin, end, matches, morseRegex)) {
    chars.push_back(matches[2].str());
    if (matches[4].matched) {
      chars.push_back(matches[4].str());
    }
    begin += matches.position() + matches.length();
  }
  
  for (size_t i = 0; i < chars.size(); i++) {
    if (chars[i] == "  " && i != chars.size() - 1) {
      result += " ";
    } else {
      result += MORSE_CODE[chars[i]];
    }
  }for (auto &ch : chars) {
   if (ch == "  ") {
    result += " ";
   } else {
    result += MORSE_CODE[ch];
   }
  }
  
  return result;
}
