[В начало](../README.md)

### ОБЪЯСНЕНИЕ

Нарциссическое число — это положительное число, представляющее собой сумму собственных цифр, каждая из которых возведена в степень количества цифр в данном основании. В этой Кате мы ограничимся десятичными числами (с основанием 10).

Например, возьмем 153 (3 цифры), которое является нарциссическим:

    1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

и 1652 (4 цифры), что не является:

     1^4 + 6^4 + 5^4 + 2^4 = 1 + 1296 + 625 + 16 = 1938

#### ЗАДАЧА:

Ваш код должен возвращать `true` или `false` (не `«true»` и `«false»`) в зависимости от того, является ли данное число нарциссическим числом в базе 10. Это может быть `True` и `False` на вашем языке, например. *PHP*.

Проверка ошибок текстовых строк или других недопустимых входных данных не требуется, в функцию будут переданы только допустимые положительные ненулевые целые числа.


#### ИНЫЕ СПОСОБЫ РЕШЕНИЯ ДАННОЙ ЗАДАЧИ

**CodeWars: [mouloud](https://codewars.com/users/mouloud)**  
**CodeWars: [moke_bupt](https://codewars.com/users/moke_bupt)**  
**CodeWars: [Satix](https://codewars.com/users/Satix)**  
**CodeWars: [Acril0](https://codewars.com/users/Acril0)**  

```c++
#include <cmath>

bool narcissistic( int value ){

  int n = value;
  int i = log10(value) + 1; //get the number of digits in "number"
  int sum = 0;
  
  while (n) {
    sum += pow(n%10, i);
    n /= 10;
  }
  
  return sum == value;
}
```
**CodeWars: [Gena2018115rus](https://codewars.com/users/Gena2018115rus)**  
```c++
#include <numeric>
#include <cmath>

bool narcissistic(int n)
{
    std::string s = std::to_string(n);
    return n == std::accumulate(s.cbegin(), s.cend(), 0, [&s](auto &&sum, auto &&v){
        return sum + std::pow(v - '0', s.size());
    });
}
```

**CodeWars: [minraws](https://codewars.com/users/minraws)**

```c++
bool narcissistic( int value ){
    int num = 0;
    int digits = 0;
  
    // get the count of the digits
    for (int i = value; i > 0; i/=10) {
        digits++;
    }
  
    // getting the sum of all digits
    for (int i = value; i > 0; i/=10) {
        num += pow(i%10, digits);
    }
  
  return value==num;
}
```