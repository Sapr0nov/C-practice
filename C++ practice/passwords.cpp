//Пароли
//Пароль от некоторого сервиса должен удовлетворять таким ограничениям:
//
//состоять из символов таблицы ASCII с кодами от 33 до 126;
//быть не короче 8 символов и не длиннее 14;
//из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — в пароле должны присутствовать не менее трёх любых.
//Напишите программу, которая проверит, что введённый пароль подходит под эти ограничения.
//
//Формат ввода
//На входе дана одна строка с паролем.
//
//Формат вывода
//Выведите YES, если пароль удовлетворяет требованиям, и NO в противном случае.

#include <iostream>
#include <string>
#include <vector>

void passwords() {
    std::string password;
    std::vector<bool> flags_SBNO(4);
    int diff = 0;
    
    std::cin >> password;
    if (password.size() < 8 || password.size() > 14) {
        std::cout << "NO";
        return;
    }
    for (std::size_t i = 0; i < password.size(); ++i) {
    
        if (int(password[i]) < 33 || int(password[i]) > 126 ) {
            std::cout << "NO";
            return;
        }
        if (int(password[i]) < 123 && int(password[i]) > 96 ) {
            flags_SBNO[0] = true;
        }else if (int(password[i]) < 91 && int(password[i]) > 64 ) {
            flags_SBNO[1] = true;
        }else if (int(password[i]) < 58 && int(password[i]) > 47 ) {
            flags_SBNO[2] = true;
        }else {
            flags_SBNO[3] = true;
        }
    }
    for (std::int64_t i = 0; i < 4; ++i) {
        if (flags_SBNO[i]){
            ++diff;
        }
    }

    if (diff < 3) {
       std::cout << "NO";
        return;
    }
    std::cout << "YES";
    return;
}
