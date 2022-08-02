#include <CodeWars/MultiplicationTable.hpp>

MultipleTable multiplication_table(int n) {
  MultipleTable table;
  for (size_t i = 1; i <= n; i++) {
    vector<int> line;
    for (size_t j = 1; j <= n; j++) {
      line.push_back(j * i);
    }
    table.push_back(line);
  }
  return table;
}