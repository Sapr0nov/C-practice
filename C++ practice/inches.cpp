//Дюймы
//Напишите программу для перевода сантиметров в дюймы. В одном дюйме
//2.54
//2.54 сантиметра.
//
//Формат ввода
//На вход поступает длина в сантиметрах. Значение может быть дробным. Используйте тип double для его хранения.
//
//Формат вывода
//Напечатайте эту длину в дюймах. Округление не требуется. Достаточно использовать стандартную точность вывода до 6 знаков после запятой, которая установлена по умолчанию.

#include <iostream>
#include <string>

double inches() {
    double koeficient = 2.54;
    double input_value;
    
    std::cin >> input_value;
    std::cout << input_value / koeficient;
    return input_value / koeficient;
}
