[В начало](../README.md)

#### ЗАДАЧА

Предположим, что "#" похож на backspace в строке. Это означает, что строка «a#bc#d» на самом деле является «bd».

Ваша задача — обработать строку, содержащую символы «#».
Примеры

`"abc#d##c" ==> "ac"`  
`"abc##d######" ==> ""`  
`"#######" ==> ""`  
`"" ==> ""`


#### ИНЫЕ ВАРИАНТЫ РЕШЕНИЯ

**CodeWars: [damage99](https://codewars.com/users/damage99)**

```c++
std::string cleanString(std::string s) 
{
  for (size_t i = 0; i < s.length(); i++)
    if (s[i] == '#')
      s.erase((i -= bool(i)), 1 + bool(i--));
  
  return s;
}
```