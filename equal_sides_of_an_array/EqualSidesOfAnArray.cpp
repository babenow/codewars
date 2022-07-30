#include <CodeWars/EqualSidesOfAnArray.hpp>
#include <cmath>
#include <iostream>


int vectorSum(vector<int> numbers) {
  int summ = 0;
  if (numbers.size() == 0) {
    return 0;
  }

  for (int it : numbers) {
    summ += it;
  }
  return summ;
}

/**
 * @brief Get the Numbers Pair object
 *
 * @param numbers
 * @param index
 * @return NumbersPair
 */
NumbersPair getNumbersPair(vector<int> numbers, size_t index) {
  vector<int> left;
  vector<int> right;
  for (size_t i = 0; i < numbers.size(); i++) {
    if (i < index) {
      left.push_back(numbers[i]);
    }

    if (i > index) {
      right.push_back(numbers[i]);
    }
  }
  return make_pair(left, right);
}

int find_even_index(const vector<int> numbers) {
  int result = -1;
  for (size_t i = 0; i < numbers.size(); i++) {
    auto numbersPair = getNumbersPair(numbers, i);

    if (vectorSum(numbersPair.first) == vectorSum(numbersPair.second)) {
      result = i;
      break;
    }
  }
  return result;
}