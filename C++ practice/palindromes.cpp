//Палиндромы
//Дана строка из строчных латинских букв и пробелов. Проверьте, является ли она палиндромом без учета пробелов.
//
//Формат ввода
//На вход подается одна строка. В строке могут быть пробелы. Подряд может идти произвольное число пробелов. Длина строки не превосходит 100.
//
//Формат вывода
//Представьте, что из строки удалили все пробелы. Необходимо вывести YES, если полученная строка — палиндром, и NO в противном случае.
#include <iostream>
#include <vector>
#include <string>

void palindromes()
{
    std::string inputString, formattedString;
    std::getline(std::cin, inputString);

    for (unsigned int i = 0; i < inputString.size(); ++i) {
        if (inputString[i] != ' ')
        {
            formattedString.push_back(inputString[i]);
        }
    }

    unsigned long lenghtString = formattedString.size();
    
    for (unsigned long i = 0; i < lenghtString / 2; ++i) {
        if (formattedString[i] != formattedString[lenghtString - 1 - i]) {
            std::cout << "NO";

            return;
        }
    }
    
    std::cout << "YES";

    return;
}
