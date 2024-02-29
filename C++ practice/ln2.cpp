//ln 2
//Значение натурального логарифма
//ln2 представляется в виде суммы
//1−1/2+1/3−1/4+...
//  с точностью до O(n).
//Напишите программу, выводящую сумму первых
//n членов этого ряда. Попробуйте также обойтись без использования инструкции if.
//
//Формат ввода
//Вводится целое положительное число
//n, помещающееся в тип int.
//
//Формат вывода
//Программа выводит ответ на задачу.

#include <iostream>
#include <string>

void ln2()
{
    int n;
    double logarithm = 0.0;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        logarithm += 1.0/i * (1 - 2 * ((i + 1) % 2));
    }
    std::cout << logarithm;
}