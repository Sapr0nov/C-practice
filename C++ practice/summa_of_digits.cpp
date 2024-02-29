//Сумма цифр
//Вычислите сумму цифр неотрицательного целого числа.
//
//Формат ввода
//На вход подаётся одно неотрицательное целое число, не превосходящее 10^9
//
//Формат вывода
//Выведите сумму цифр этого числа.

#include <iostream>
#include <string>

void summa_of_digits()
{
    int sum = 0;
    std::string strNumber;
    std::getline(std::cin, strNumber);
    for (char symbol : strNumber) {
        sum += symbol - '0';
    }
    std::cout << sum;
}
