#ifndef CODEWARS_EQUALSIDESOFANARRAY_HPP_
#define CODEWARS_EQUALSIDESOFANARRAY_HPP_

#include <vector>

using namespace std;

typedef pair<vector<int>, vector<int>> NumbersPair;

int vectorSum(vector<int> numbers);
NumbersPair getNumbersPair(vector<int> numbers, size_t index);
int find_even_index(const vector<int> numbers);

#endif // CODEWARS_EQUALSIDESOFANARRAY_HPP_