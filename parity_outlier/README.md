[В начало](../README.md)
# Задача

Вам дан массив (который будет иметь длину не менее 3, но может быть очень большим), 
содержащий целые числа. Массив либо полностью состоит из нечетных целых чисел, 
либо полностью состоит из четных целых чисел, за исключением одного целого числа N. 
Напишите метод, который принимает массив в качестве аргумента и возвращает этот «выброс» N.


```cpp
[2, 4, 0, 100, 4, 11, 2602, 36]
Should return: 11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21]
Should return: 160 (the only even number)
```

---
# Возможные иные решения

**CodeWars [aleksandrkharitonov](https://www.codewars.com/users/aleksandrkharitonov)**


```cpp
int FindOutlier(std::vector<int> arr)
{
    int even;
    int odd;
  
    int evenCount = 0;
    int oddCount = 0;
  
    for (auto a : arr)
        a % 2 == 0 ? (evenCount++, even = a) : (oddCount++, odd = a);
  
    return evenCount < oddCount ? even : odd;
}
```

**Codewars: [rubs33](https://www.codewars.com/users/rubs33)**
```cpp
#define LAST(x) ((x) & 1)

int FindOutlier(std::vector<int> arr)
{
  char lastBit = (LAST(arr[0]) + LAST(arr[1]) + LAST(arr[2])) > 1 ? 0 : 1;
  
  for (int val: arr) if (LAST(val) == lastBit) return val;

  return 0;
}
```

**Codewars: [算痞子](https://www.codewars.com/users/算痞子)**

```c++
#include <cmath>
int FindOutlier(std::vector<int> arr)
{
    if ((abs(arr[0]) + abs(arr[1])) % 2 == 0 )  //前两数同奇同偶
    {
        int mod = abs(arr[0]) % 2;
        for (int var : arr)
        {
            if (abs(var) % 2 != mod)
                return var;
        }
    }
    else  //前两数一奇一偶
    {
        int mod = abs(arr[2]) % 2;
        if (abs(arr[0]) % 2 != mod)
            return arr[0];
        else
            return arr[1];
    }
}
```