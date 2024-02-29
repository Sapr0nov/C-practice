//Сортировка по убыванию
//Вам даны строки текстового файла. Отсортируйте набор этих строк по убыванию.
//
//Формат ввода
//Количество строк не превосходит 1000. Каждая строка состоит из символов ASCII с кодами от 32 до 126, длина строки не превосходит 100.
//
//Формат вывода
//Напечатайте строки в отсортированном по убыванию порядке. Для сравнения строк друг с другом достаточно использовать стандартные операторы сравнения, определённые для std::string.

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void desc_sort()
{
    std::cout << "starting \n";
    std::ifstream file("input.txt");
    std::vector<std::string> input, output;
    std::string line;
    
    while(std::getline(file, line))
    {
        input.push_back(line);
    }
    std::cout << input.size();

    for (std::string value : input) {
        std::cout << value << " ";
    }

    return;
}

