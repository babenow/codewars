#include <CodeWars/MorseCode.hpp>
#include <regex>
#include <vector>

std::string decodeMorse(std::string mc) {
  std::vector<std::string> chars = {};
  std::string result = "";
  std::regex morseRegex("([^\\s]+|\\s{3})");
  std::smatch matches;
  auto begin = mc.cbegin();
  while (std::regex_search(begin, mc.cend(), matches, morseRegex)) {
    chars.push_back(matches[0].str());
    begin += matches.position() + matches.length();
  }

  for (auto ch : chars) {
    if (ch == "   ") {
      result += " ";
    } else {
      result += MORSE_CODE[ch];
    }
  }
  return result;
}
