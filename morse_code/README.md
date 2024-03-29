[В начало](../README.md)
---
В этом ката вы должны написать простой декодер азбуки Морзе. Хотя азбука Морзе в настоящее время в основном вытеснена голосовыми и цифровыми каналами передачи данных, она по-прежнему используется в некоторых приложениях по всему миру.
Код Морзе кодирует каждый символ как последовательность «точек» и «тире». Например, буква A кодируется как ·−, буква Q кодируется как −−·−, а цифра 1 кодируется как ·−−−−. Азбука Морзе нечувствительна к регистру, традиционно используются заглавные буквы. Когда сообщение написано азбукой Морзе, один пробел используется для разделения кодов символов, а 3 пробела используются для разделения слов. Например, сообщение HEY JUDE на азбуке Морзе имеет вид ···· · −·−− ··−−− ··− −·· ·.

ПРИМЕЧАНИЕ. Лишние пробелы до или после кода не имеют значения и их следует игнорировать.

В дополнение к буквам, цифрам и некоторым знакам препинания существуют специальные служебные коды, наиболее известным из которых является международный сигнал бедствия SOS (который был впервые выпущен Титаником), который кодируется как ···---··· . Эти специальные коды обрабатываются как отдельные специальные символы и обычно передаются как отдельные слова.

Ваша задача — реализовать функцию, которая будет принимать на вход азбуку Морзе и возвращать декодированную удобочитаемую строку.

Например:

decodeMorse('.... . -.-- .--- ..- -.. .')
//должен вернуть "ЭЙ ДЖУД"
ПРИМЕЧАНИЕ. В целях кодирования вы должны использовать символы ASCII. и -, а не символы Unicode.