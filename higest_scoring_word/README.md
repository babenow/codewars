[В начало](../README.md)

#### ЗАДАЧА

Учитывая строку слов, вам нужно найти слово с наивысшим баллом.

Каждая буква слова оценивается в зависимости от ее положения в алфавите: a = 1, b = 2, c = 3 и т. д.

Вам нужно вернуть слово с наивысшим баллом в виде строки.

Если два слова оцениваются одинаково, верните слово, которое появляется первым в исходной строке.

Все буквы будут строчными, и все входные данные будут действительными.

#### ИНЫЕ РЕШЕНИЯ ЗАДАЧИ

**CodeWars: [mocoma](https://codewars.com/users/mocoma)**

```c++
#include <string>
#include <sstream>

std::string highestScoringWord(const std::string &str)
{
  int mostScored = 0;
  std::string mostScoredS;
  
  std::stringstream ss(str);
  std::string curr;
  while(ss >> curr)
  {
    int score = 0;
    for(char c : curr) score += c - 'a' + 1;
    
    if(score > mostScored)
    {
      mostScored = score;
      mostScoredS = curr;
    }
  }
  
  return mostScoredS;
}
```
