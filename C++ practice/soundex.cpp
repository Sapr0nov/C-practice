//Soundex
//Известный алгоритм Soundex определяет, похожи ли два английских слова по звучанию. На вход он принимает слово и заменяет его на некоторый четырёхсимвольный код. Если коды двух слов совпадают, то слова, как правило, звучат похоже.
//
//Вам требуется реализовать этот алгоритм. Он работает так:
//
//Первая буква слова сохраняется.
//В остальной части слова буквы a, e, h, i, o, u, w и y удаляются;
//Оставшиеся буквы заменяются на цифры от 1 до 6, причём похожим по звучанию буквам соответствуют одинаковые цифры:
//b, f, p, v: 1
//c, g, j, k, q, s, x, z: 2
//d, t: 3
//l: 4
//m, n: 5
//r: 6
//
//Любая последовательность идущих подряд одинаковых цифр сокращается до одной такой цифры.
//Итоговая строка обрезается до первых четырёх символов.
//Если длина строки получилась меньше четырёх символов, в конце добавляются нули.
//Примеры:
//
//ammonium → ammnm → a5555 → a5 → a500.
//
//implementation → implmnttn → i51455335 → i514535 → i514.
//
//Формат ввода
//На вход подаётся одно непустое слово из строчных латинских букв. Длина слова не превосходит 20 символов.
//
//Формат вывода
//Напечатайте четырёхбуквенный код, соответствующий слову.

#include <iostream>
#include <stdio.h>

void soundex()
{
    std::string word, result;
    std::getline(std::cin, word);

    result = word[0];

    for (unsigned long i = 1; i < word.size(); ++i)
    {
        switch ( word[i] )
        {
            case 'b':
            case 'f':
            case 'p':
            case 'v':
                if (result.back()!='1') {
                    result += '1';
                }
                break;
            case 'c':
            case 'g':
            case 'j':
            case 'k':
            case 'q':
            case 's':
            case 'x':
            case 'z':
                if (result.back()!='2') {
                    result += '2';
                }
                break;
            case 'd':
            case 't':
                if (result.back()!='3') {
                    if (result.back()!='3') {
                        result += '3';
                    }
                }
                break;
            case 'l':
                if (result.back()!='4') {
                    result += '4';
                }
                break;
            case 'm':
            case 'n':
                if (result.back()!='5') {
                    result += '5';
                }
                break;
            case 'r':
                if (result.back()!='6') {
                    result += '6';
                }
                break;
            default:
                break;
        }
    }
    result.resize(4,'0');
    std::cout << result;
    return;
}
