#include <CodeWars/SumOfNumbers.hpp>
#include <cmath>
#include <iostream>

using namespace std;

int get_sum(int a, int b) {
  if (a == b) {
    return a;
  }
  int min = std::min(a, b);
  int max = std::max(a, b);
  int result = 0;
  for (int i = min; i <= max; i++) {
    result += i;
  }
  
  return result;
}