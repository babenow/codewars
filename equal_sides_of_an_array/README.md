### ОПИСАНИЕ:
Вам будет дан массив целых чисел.  
Ваша задача состоит в том, чтобы взять этот массив и найти индекс N, 
где сумма целых чисел слева от N равна сумме целых чисел справа от N. 
 Если такого индекса нет, верните - 1.

##### Например:

Допустим, вам дан массив {1,2,3,4,3,2,1}:
Ваша функция вернет индекс 3, потому что на 3-й позиции массива сумма левой части индекса ({1,2,3}) и сумма правой части индекса ({3,2, 1}) оба равны 6.

Давайте посмотрим на другой.
Вам дан массив {1,100,50,-51,1,1}:
Ваша функция вернет индекс 1, потому что в 1-й позиции массива сумма левой части индекса ({1}) и сумма правой части индекса ({50,-51,1,1 }) оба равны 1.

Последний:
Вам дан массив {20,10,-80,10,10,15,35}
В индексе 0 левая сторона {}
Правая сторона {10,-80,10,10,15,35}
Они оба равны 0 при сложении. (Пустые массивы равны 0 в этой задаче)
Индекс 0 — это место, где левая и правая стороны равны.

Примечание. Помните, что в большинстве языков программирования/скриптов индекс массива начинается с 0.

Вход:
Целочисленный массив длины 0 < arr < 1000. Числа в массиве могут быть любыми целыми положительными или отрицательными.

Выход:
Наименьший индекс N, где сторона слева от N равна стороне справа от N. Если вы не найдете индекс, соответствующий этим правилам, вы вернете -1.

Примечание:
Если вам дан массив с несколькими ответами, верните наименьший правильный индекс.

#### Иные решения

**Codewars: [user6582120](https://www.codewars.com/users/user6582120)**

```c++
#include <vector>
#include <numeric>
using namespace std;

int find_even_index (const vector <int> numbers) {
  for (int index = 0; index < numbers.size(); index++)
  {
    int left_sum = std::accumulate(numbers.begin(), numbers.begin() + index, 0);
    int right_sum = std::accumulate(numbers.begin() + index + 1, numbers.end(), 0);
    if (left_sum == right_sum)
      return index;
  }
  return -1;
}
```

**Codewars: [Melonpi](https://www.codewars.com/users/Melonpi)**

```c++
#include <vector>
#include <numeric>
using namespace std;

int find_even_index (const vector <int> numbers) {
  //note: numbers size always greater than 0.
  int left_part_sum = 0;
  int right_part_sum = std::accumulate(numbers.begin()+1, numbers.end(), 0);
  if(left_part_sum == right_part_sum) return 0;
  
  for(int i = 1; i < numbers.size(); ++i)
  {
    left_part_sum += numbers[i-1];
    right_part_sum -= numbers[i];
    if(left_part_sum == right_part_sum) return i;
  }
  return -1;
}
```

**Codewars: [weulerborges](https://www.codewars.com/users/weulerborges)**

```c++
#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {
  int sum_r = 0, sum_l = 0;
  for (int i : numbers) sum_r += i;
  
  for(int k = 0; k < numbers.size(); k++) {
    if (sum_r - numbers[k] == sum_l) return k;
    
    sum_r -= numbers[k];
    sum_l += numbers[k];
  }

  return -1;
}
```