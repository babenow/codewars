#include <CodeWars/FindOddInt.hpp>

int getCountEntries(const std::vector<int> &numbers, int number) {
  int result = 0;
  for (int num : numbers) {
    if (num == number) {
      result++;
    }
  }
  return result;
}

int findOdd(const std::vector<int> &numbers) {
  int result = -1;

  for (int number : numbers) {
    if (getCountEntries(numbers, number) % 2 != 0) {
      result = number;
      break;
    }
  }

  return result;
}