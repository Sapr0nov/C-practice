//Количество дней в месяце
//Напишите программу, выводящую количество дней в месяце по заданному номеру месяца и году.
//
//Формат ввода
//На вход программе подается два целых положительных числа: номер месяца (от 1 до 12) и четырёхзначный год.
//
//Формат вывода
//Необходимо вывести одно число — количество дней в заданном месяце.

#include <iostream>
#include <string>

bool isHightYear(int year)
{
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        return true;
    }
    return false;
}

void days_in_month()
{
    int month, year;
    std::cin >> month >> year;
    switch (month) {
    case 2:
        if (isHightYear(year)) {
            std::cout << 29;
        }else{
            std::cout << 28;
        }
        break;
    
    case 4:
    case 6:
    case 9:
    case 11:
        std::cout << 30;
        break;
    default:
        std::cout << 31;
        break;
    }
}
