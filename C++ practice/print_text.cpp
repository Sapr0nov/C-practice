//Печать текста
//Напишите программу, печатающую на экране первые строчки со страницы Бьярне Страуструпа про C++:
//
//C++ is a general-purpose programming language with a bias towards systems programming that
//  - is a better C
//  - supports data abstraction
//  - supports object-oriented programming
//  - supports generic programming.
//Не потеряйте парные пробелы в начале строк и переносы в конце строк.

#include <iostream>
void print_text() {
    std::cout << "C++ is a general-purpose programming language with a bias towards systems programming that\n";
    std::cout << "  - is a better C\n";
    std::cout << "  - supports data abstraction\n";
    std::cout << "  - supports object-oriented programming\n";
    std::cout << "  - supports generic programming.";
}
