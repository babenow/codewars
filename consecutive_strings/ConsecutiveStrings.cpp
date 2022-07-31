#include <CodeWars/ConsecutiveStrings.hpp>
#include <functional>
#include <numeric>

/**
 * @brief
 * @details
 * Создать вектор из пар StringVec, size_t
 * Отсортировать вектор по size_t
 * Вернуть первый элемент вектора
 *
 * @param strarr
 * @param k
 * @return std::string
 */
std::string LongestConsec::longestConsec(StringVec &strarr, size_t k) {
  std::string result = "";
  if (strarr.size() == 0 || k > strarr.size() || k <= 0) {
    return "";
  }

  for (auto it = strarr.begin(); it != strarr.end() - k + 1; it++) {
    auto stmt = std::accumulate(it, it + k, std::string(""));
    if (stmt.length() > result.length()) {
      result = stmt;
    }
  }
  return result;
}
