[В начало](../README.md)
# Задача

Даны два целых числа a и b, которые могут быть положительными или отрицательными, 
найдите сумму всех целых чисел между ними и включая их и верните ее. 
Если два числа равны, верните a или b.

Примечание: a и b не упорядочены!Даны два целых числа a и b, которые могут быть 
положительными или отрицательными, найдите сумму всех целых чисел между ними и 
включая их и верните ее. Если два числа равны, верните a или b.

Примечание: a и b не упорядочены!

### Примеры (а, б) --> вывод (пояснение)
```console
(1, 0) --> 1 (1 + 0 = 1)
(1, 2) --> 3 (1 + 2 = 3)
(0, 1) --> 1 (0 + 1 = 1)
(1, 1) --> 1 (1 since both are same)
(-1, 0) --> -1 (-1 + 0 = -1)
(-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)
```

### Иные решения [CODEWARS](https://codewars.com)

**Codewars: [Nodira](https://www.codewars.com/users/Nodira)**

```c++
int get_sum(int a, int b)
{
  int n = (a < b ? b - a : a - b) + 1;
  return n *(a + b)/ 2;
}
```

**Codewars: [fenchao](https://www.codewars.com/users/fenchao)**

```c++
int get_sum(int a, int b)
{
  //Good luck!
  return (a + b) * (std::abs(a - b) + 1) / 2;
}
```

**Codewars: [kd0010](https://www.codewars.com/users/kd0010)**

```c++
#include <utility>

int get_sum(int a, int b)
{
  int sum = 0;
  if (a > b) std::swap(a, b);
  while (a != b) {
    sum += a;
    a++;
  }
  sum += b;
  return sum;
}
```