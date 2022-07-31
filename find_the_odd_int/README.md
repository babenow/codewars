[В начало](../README.md)
#### ЗАДАНИЕ
- Дан массив целых чисел, найдите то, которое встречается нечетное количество раз.

- Всегда будет только одно целое число, которое встречается нечетное количество раз.

#### Примеры
- `[7]` должен вернуть 7, потому что это происходит 1 раз (что нечетно).
- `[0]` должен возвращать 0, потому что это происходит 1 раз (что нечетно).
- `[1,1,2]` должен вернуть 2, потому что он встречается 1 раз (что нечетно).
- `[0,1,0,1,0]` должен вернуть 0, потому что он встречается 3 раза (что нечетно).
- `[1,2,2,3,3,3,4,3,3,3,2,2,1]` должен вернуть 4, потому что он появляется 1 раз (что нечетно).

### Иные решения данной задачи

**CodeWars: [lucianmusat](https://codewars.com/users/lucianmusat)**  
**CodeWars: [kstberg8](https://codewars.com/users/kstberg8)**  
**CodeWars: [luka1998](https://codewars.com/users/luka1998)**  
**CodeWars: [Wojan](https://codewars.com/users/Wojan)**

```c++
#include <vector>

int findOdd(const std::vector<int>& numbers){
  for (auto elem: numbers){
    if (std::count(numbers.begin(), numbers.end(), elem) % 2 != 0) {
      return elem;
    }
  }
  return 0;
}
```

**CodeWars: [Unnamed](https://codewars.com/users/Unnamed)**  
**CodeWars: [Crimson](https://codewars.com/users/Crimson)**  
**CodeWars: [Crow](https://codewars.com/users/Crow)**  
**CodeWars: [koys](https://codewars.com/users/koys)**  
```c++
#include <functional>
#include <numeric>
#include <vector>

int findOdd(const std::vector<int>& numbers) {
  return std::accumulate(numbers.cbegin(), numbers.cend(), 0, std::bit_xor<>());
}
```

**CodeWars: [mdk87](https://codewars.com/users/mdk87)**  
```c++
#include <vector>
#include <unordered_map>

int findOdd(const std::vector<int>& numbers){
    std::unordered_map<int, int> m;
    for (const auto& n: numbers) {
        m[n]++;
    }
    for (const auto& n: m) {
        if (n.second % 2 != 0) {
            return n.first;
        }
    }
    return 0;
}
```