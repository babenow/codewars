#include <CodeWars/BackspacesInString.hpp>

std::string cleanString(const std::string &s) {
  std::string result;
  for (auto it = s.cbegin(); it != s.cend(); it++) {
    if (*it != '#') {
      result.push_back(*(it));
    } else if (!result.empty()) {
      result.pop_back();
    }
  }
  return result;
}
