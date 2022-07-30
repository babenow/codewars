#include <iostream>
#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names) {
  std::string result = "no one like this";

  if (names.size() > 0) {
    size_t len = names.size();
    if (len < 2) {
      result = names[0] + " like this";
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

int main() {
  std::vector<std::string> names = {"Maks", "Julia", "Father", "Brother"};
  std::cout << likes(names) << std::endl;
  return EXIT_SUCCESS;
}
