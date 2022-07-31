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