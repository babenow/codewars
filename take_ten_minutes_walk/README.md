[В начало](../README.md)

#### ЗАДАНИЕ

Вы живете в городе Картезия, где все дороги выложены идеальной сеткой.  
Вы пришли на встречу на десять минут раньше назначенного срока, поэтому решили воспользоваться возможностью прогуляться.  
Город предоставляет своим гражданам приложение Walk Generating на их телефонах — каждый раз, когда вы нажимаете кнопку, оно отправляет вам массив строк из одной буквы, представляющих направления ходьбы (например, `['n', 's', 'w', 'e']`).  
Вы всегда проходите только один квартал для каждой буквы (направления), и вы знаете, что вам потребуется одна минута, чтобы пройти один городской квартал, поэтому создайте функцию, которая будет возвращать `true`, если прогулка, которую предлагает вам приложение, займет у вас ровно десять минут (вы не хочу ни рано, ни поздно!) и, конечно же, вернет вас в исходную точку. В противном случае верните `false`.

Примечание: 
_вы всегда будете получать допустимый массив, содержащий случайный набор букв направления (только «n», «s», «e» или «w»). Он никогда не даст вам пустой массив (это не прогулка, это стояние на месте!)._

#### ДРУГИЕ СПОСОБЫ РЕШЕНИЯ

**CodeWars: [siebenschlaefer](https://codewars.com/users/siebenschlaefer)**

```c++
bool isValidWalk(const std::vector<char>& walk) {
    return walk.size() == 10 &&
        std::count(begin(walk), end(walk), 'n') == std::count(begin(walk), end(walk), 's') &&
        std::count(begin(walk), end(walk), 'w') == std::count(begin(walk), end(walk), 'e');
}
```