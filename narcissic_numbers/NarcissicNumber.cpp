#include <CodeWars/NarcissicNumber.hpp>
#include <cmath>
#include <string>
#include <vector>
/**
 * @brief
 * @details
 * 1. Привести число к строке
 * 2. Сформировать вектор из чисел (по полученой строке)
 * 3. Рассчитать результат
 *
 * @param value
 * @return true
 * @return false
 */
bool narcissistic(int value) {
  std::string stmt = std::to_string(value);
  std::vector<int> digits;
  int result = 0;
  for (size_t i = 0; i < stmt.length(); i++) {
    int n = std::stoi(stmt.substr(i, 1));
    digits.push_back(n);
  }

  for (int it : digits) {
    result += std::pow(it, digits.size());
  }

  return result == value;
}