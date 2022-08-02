[В начало](../README.md)

#### ЗАДАЧА

Написать функцию, которая будет возвращать количество одинаковых не зависимых от регистра алфавитных символов или цифр, которые встречаются более одного раза во входной строке.  
Входная строка предполагает содержание только буквенных символов (как в нижнем, так и в верхнем регистре) и цифр.

##### Примеры

`abcde -> 0` нет совпадающих символов  
`aabbcde -> 2` `a` и `b`  
`aabBcde -> 2` `a` встречается дважды и `b` дважды (`b` и `B`)   
`indivisibility -> 1` `i` встречается 6 раз  
`Indivisibilities -> 2` `i` встречаается 6 раз и `s` дважы  
`aA11 -> 2` `a` и `1`


#### ИНЫЕ РЕШЕНИЯ ДАННОЙ ЗАДАЧИ

**CodeWars: [sv90](https://codewars.com/users/sv90)**  
**CodeWars: [VasilenkoKV](https://codewars.com/users/VasilenkoKV)**  

```c++
#include <string>
#include <unordered_map>
#include <algorithm>

#include <cctype>

std::size_t duplicateCount(const char* in) {
  std::unordered_map<char, unsigned> counts;
  for (const char* c = in; *c != '\0'; ++c) {
    ++counts[tolower(*c)];
  }
  return std::count_if(cbegin(counts), cend(counts), [](const auto& count) {
      return count.second > 1;
    });
}
```

**CodeWars: [ketjow4](https://codewars.com/users/ketjow4)**

```c++
#include <algorithm>
#include <array>

size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
    std::array<int,255> occurences = {};
    for(auto i = 0; i < strlen(in); ++i)
    {
       occurences[std::tolower(in[i])]++;
    }
    return std::count_if(occurences.begin(),occurences.end(), [](int times) { return times > 1;});
}
```