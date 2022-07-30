#include <CodeWars/WhoLikeThis.hpp>

std::string likes(const std::vector<std::string> &names) {
  std::string result = "no one likes this";

  if (names.size() > 0) {
    size_t len = names.size();
    if (len < 2) {
      result = names[0] + " likes this";
    } else if (len == 2) {
      result = names[0] + " and " + names[1] + " like this";
    } else if (len == 3) {
      result = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    } else {
      size_t other = len - 2;
      result =
          names[0] + ", " + names[1] + " and " + std::to_string((int)other) + " others like this";
    }
  }
  return result;
}