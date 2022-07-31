[В начало](../README.md)

### Задача

Вам дан массив (список) строк и целое число k.  
Ваша задача — вернуть первую самую длинную строку, состоящую из k последовательных строк,  
 взятых в массиве.

Примеры:  
`strarr = ["tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"], k = 2`

Объединив последовательные строки strarr на 2, мы получим:
```shell
treefoling      (длина  10) конкатенация strarr[0] и strarr[1]
folingtrashy    ("      12) конкатенация strarr[1] и strarr[2]
trashyblue      ("      10) конкатенация strarr[2] и strarr[3]
blueabcdef      ("      10) конкатенация strarr[3] и strarr[4]
abcdefuvwxyz    ("      12) конкатенация strarr[4] и strarr[5]
```

Две строки самые длинные: _«folingtrashy»_ и _«abcdefuvwxyz»_.  
Первое что пришло это _«folingtrashy»_ так
`longest_consec(strarr, 2)` должен возвращать _«folingtrashy»_.

Таким же образом:  
`longest_consec(["zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"], 2) --> "abigailtheta"`  
`n` — длина массива строк,  
если `n = 0` или `k > n` или `k <= 0`, вернуть `""`. 

Примечание
последовательные строки: следуют одна за другой без перерыва


#### Иные решения CodeWars

**CodeWars: [g964](https://codewars.com/users/g964)**

```c++
#include <string>
#include <vector>

class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k);
};

std::string LongestConsec::longestConsec(std::vector<std::string> &strarr, int k)
{
    unsigned int n = strarr.size();
    if ((n == 0) || (k > static_cast<int> (n)) || (k <= 0))
        return "";

    int maxSum = 0, start = 0, nd = 0;
    std::string result = "";
    for (unsigned int i = 0; i <= n - k; i++)
    {
        int sum = 0;
        for (unsigned int j = i; j < i + k; j++)
          sum += strarr[j].length();
        if (sum > maxSum)
        {
          maxSum = sum; start = i; nd = i + k;
        }
    }
    for (int c = start; c < nd; c++)
        result += strarr[c];
    return result;
}
```

**CodeWars: [SalaxMind](https://codewars.com/users/SalaxMind)**

```c++
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k);
};

std::string LongestConsec::longestConsec(std::vector<std::string> &v, int k)
{
  if(v.empty() || v.size() < k || k <= 0)
    return "";
    
  auto max = v.begin();
  int sum = std::accumulate(max, max + k, 0, [](int acc, std::string s) { return acc + s.size(); });
  int new_sum = sum;
  
  for(auto next = max + k, prev = max; next != v.end(); ++next, ++prev)
  {
    new_sum += next->size() - prev->size();
    if(new_sum > sum)
    {
      
      sum = new_sum;
      max = prev + 1;
    }
  }
  
  return std::accumulate(max + 1, max + k, *max);
}
```

