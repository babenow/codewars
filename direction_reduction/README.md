[В начало](../README.md)

#### ЗАДАЧА

Однажды, на пути через старый дикий горный запад,…

…человеку дали указание пройти из одной точки в другую. Направления были `«СЕВЕР», «ЮГ», «ЗАПАД», «ВОСТОК»`. Ясно, что "СЕВЕР" и "ЮГ" противоположны, "ЗАПАД" и "ВОСТОК" тоже.

Идти в одном направлении и сразу же возвращаться в противоположном направлении — бесполезное усилие. Поскольку это дикий запад, с ужасной погодой и небольшим количеством воды, важно экономить силы, иначе вы можете умереть от жажды!
Как я ловко пересек горную пустыню.

Указания, данные мужчине, например, следующие (в зависимости от языка):

{ "СЕВЕР", "ЮГ", "ЮГ", "ВОСТОК", "ЗАПАД", "СЕВЕР", "ЗАПАД" };

Сразу видно, что идти "НА СЕВЕР" и сразу "ЮГ" нецелесообразно, лучше оставайтесь на том же месте! Итак, задача состоит в том, чтобы дать человеку упрощённый вариант плана. Лучший план в этом случае просто:

{"ЗАПАД"}

Другие примеры:

В ["СЕВЕР", "ЮГ", "ВОСТОК", "ЗАПАД"] направление "СЕВЕР" + "ЮГ" идет на север и сразу же возвращается.

Путь становится ["ВОСТОК", "ЗАПАД"], теперь "ВОСТОК" и "ЗАПАД" аннигилируют друг друга, поэтому окончательный результат будет [] (ноль в Clojure).

В ["СЕВЕР", "ВОСТОК", "ЗАПАД", "ЮГ", "ЗАПАД", "ЗАПАД"], "СЕВЕР" и "ЮГ" не являются прямо противоположными, но они становятся прямо противоположными после сокращения "ВОСТОК" и "ЗАПАД", поэтому весь путь можно свести к ["ЗАПАД", "ЗАПАД"].
Задача

Напишите функцию dirReduc, которая будет принимать массив строк и возвращать массив строк с удаленными ненужными направлениями (W<->E или S<->N рядом).

    Версия Haskell принимает список направлений с данными Direction = North | Восток | Запад | Юг.
    Версия Clojure возвращает nil, когда путь сводится к нулю.
    Версия Rust использует часть перечисления Direction {North, East, West, South}.

Дополнительные примеры см. в разделе «Примеры тестов».
Заметки

    Не все пути можно сделать проще. Путь ["СЕВЕР", "ЗАПАД", "ЮГ", "ВОСТОК"] не сводим. «СЕВЕР» и «ЗАПАД», «ЗАПАД» и «ЮГ», «ЮГ» и «ВОСТОК» не являются прямо противоположными друг другу и не могут стать таковыми. Следовательно, путь результата сам по себе: ["СЕВЕР", "ЗАПАД", "ЮГ", "ВОСТОК"].
    если вы хотите перевести, пожалуйста, спросите, прежде чем переводить.

#### Иные решения данной задачи

**Codewars: [Rauta](https://www.codewars.com/users/Rauta)**

```c++
#include <string>
#include <vector>
#include <unordered_map>

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(const std::vector<std::string> &arr);
    static const std::unordered_map<std::string, std::string> oppositeWays;
};

const std::unordered_map<std::string, std::string> DirReduction::oppositeWays {
    {"EAST", "WEST"},
    {"WEST", "EAST"},
    {"NORTH", "SOUTH"},
    {"SOUTH", "NORTH"},
};


std::vector<std::string> DirReduction::dirReduc(const std::vector<std::string> &arr) {
    std::vector<std::string> result;
    for (const auto &way : arr) {
        if (result.empty() || result.back() != oppositeWays.at(way)) {
            result.push_back(way);
        }
        else {
            result.pop_back();
        }
    }
    return result;
}
```