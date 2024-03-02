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
    std::ifstream file("input.txt"); // absolute path for your file
    std::vector<std::string> input, output;
    std::string line, tmp;

    while(std::getline(file, line))
    {
        input.push_back(line);
    }

    bool flag = true;
    while (flag) {
        flag = false;
        for (unsigned int i = 0; i < input.size(); ++i)
        {
            while (i + 1 < input.size() && input[i + 1] > input[i]) {
                tmp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = tmp;
                flag = true;
            }
        }
    }

    for (std::string value : input) {
        std::cout << value << "\n";
    }

    file.close();

    return;
}
