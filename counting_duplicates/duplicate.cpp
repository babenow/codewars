#include <CodeWars/CountingDuplicates.hpp>
#include <cctype>
#include <map>
#include <regex>
#include <string>

size_t duplicateCount(const char *in) {
  size_t result = 0;
  // Проверка на содержрание запрещенных символов
  std::regex base("\\W");
  std::smatch matches;
  std::string in_str = std::string(in);
  if (std::regex_search(in_str, matches, base)) {
    return result;
  }

  std::map<char, size_t> chars;
  for (size_t i = 0; i < in_str.length(); i++) {
    auto ch = std::tolower(in[i]);
    chars[ch]++;
  }

  for (auto &it : chars) {
    if (it.second > 1) {
      result++;
    }
  }

  return result;
}
