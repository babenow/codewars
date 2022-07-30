### Задание
Ваша задача — рассчитать минимальное количество ходов для победы в игре «Ханойские башни»  
с заданным количеством дисков.

Что такое «Ханойские башни»?  
«Ханойские башни» — это простая игра, состоящая из трех стержней и нескольких дисков разного размера,  
которые могут надвигаться на любой стержень. Головоломка начинается с дисков, сложенных аккуратной  
стопкой в порядке возрастания размера на одном стержне, самый маленький вверху, образуя таким  
образом коническую форму.

Цель головоломки — переместить всю стопку на другой стержень, соблюдая следующие простые правила:

- За один раз можно перемещать только один диск.
- Каждое перемещение состоит из взятия верхнего диска из одного из стеков и помещения его поверх другого стека, т. е. диск можно переместить только в том случае, если он является самым верхним диском в стеке.
- Ни один диск не может быть помещен поверх меньшего диска.

#### Решения других пользователей

**CodeWars: [mortonfox](https://codewars.com/users/mortonfox)**  
**CodeWars: [pH77](https://codewars.com/users/pH77)**  
**CodeWars: [lamhere55](https://codewars.com/users/lamhere55)**  
**CodeWars: [7097511](https://codewars.com/users/7097511)**  
**CodeWars: [Arkadaq](https://codewars.com/users/Arkadaq)**

```c++
unsigned long long hanoi(unsigned disks) {
  return (1 << disks) - 1;
}
```

**CodeWars: [Ica17_systel](https://codewars.com/users/Ica17_systel)**
```c++
#include <tgmath.h>

unsigned long long hanoi(unsigned disks) {
  return pow(2,disks)-1;
}
```

**CodeWars: [Razneg](https://codewars.com/users/Razneg)**
```c++
unsigned long long hanoi(unsigned disks) {
  unsigned long long r = 1;
  while (--disks) r = r * 2 + 1;
  return r;
}
```

**CodeWars: [magaiti](https://codewars.com/users/magaiti)**

```c++
unsigned long long hanoi(unsigned disks) {
  if (disks == 0) return 0;
  return 2 * hanoi(disks - 1) + 1;
}
```