#include <CodeWars/FindTheParityOutlier.hpp>
#include <iostream>
bool isEven(std::vector<int> arr) {
  int even = 0;
  int odd = 0;
  for (size_t i = 0; i < arr.size(); i++) {
    if (arr[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  return even > 1;
}

int FindOutlier(std::vector<int> arr) {
  int result;
  bool even = isEven(arr);

  for (size_t i = 0; i < arr.size(); i++) {
    if (even && arr[i] % 2 != 0) {
      result = arr[i];
    } else if (!even && arr[i] % 2 == 0) {
      result = arr[i];
    }
  }

  return result;
}