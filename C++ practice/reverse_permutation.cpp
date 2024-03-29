//Обратная перестановка
//На мероприятие приглашены
//n гостей. Им предлагают занять места с номерами от 1 до
//n в зале. Гости занимают эти места в произвольном порядке. Известно, на каком месте сел очередной гость.
//
//Выпишите для каждого очередного места номер гостя, который на него сел.
//
//Формат ввода
//Дано число
//n, а затем
//n различных чисел от 1 до n (A1 A2 ... An). Число
//Ak — это номер места, на которое сел k-й гость.
//Число n не превосходит 20000.
//
//Формат вывода
//Выведите
//n чисел от 1 до n. Число Bk
//  должно обозначать номер гостя, который сел на
//k-е место.

#include <iostream>
#include <vector>

void reverse_permutation()
{
    unsigned int n;
    std::vector<unsigned int> persons, places;
    std::cin >> n;
    persons.resize(n, 0);
    places.resize(n, 0);
    
    for (unsigned int i = 0; i < n; ++i) {
        std::cin >> persons[i];
        places[persons[i] - 1] = i + 1;
    }
    
    for (unsigned int elem : places) {
        std::cout << elem << " ";
    }

    return;
}
