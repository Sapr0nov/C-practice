//Прямоугольный треугольник
//Напишите программу, которая проверяет является ли треугольник прямоугольным.
//
//Формат ввода
//На стандартный поток ввода подаётся три целых положительных числа — стороны треугольника. Числа не превосходят 30000.
//
//Формат вывода
//Если полученный треугольник является прямоугольным, напечатайте YES. Если треугольник не является прямоугольным, напечатайте NO. Если с заданными сторонами невозможно построить треугольник, напечатайте UNDEFINED.

#include <iostream>
#include <string>
void rect_triangle()
{
    int side1, side2, side3;
    std::cin >> side1 >> side2 >> side3;
    if ( (side1 >= side2 + side3) || (side2 >= side1 + side3) || (side3 >= side1 + side2)) {
        std::cout << "UNDEFINED";
    }
    else if (   (side1*side1 == side2*side2 + side3*side3) ||
                (side2*side2 == side1*side1 + side3*side3) ||
                (side3*side3 == side1*side1 + side2*side2)) {
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
}
