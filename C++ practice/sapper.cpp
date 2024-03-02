//Сапёр
//Вам необходимо построить поле для игры «Сапёр» по его конфигурации — высоте, ширине и координатам расставленных на нем мин.
//
//Вкратце напомним правила построения поля для игры «Сапёр»:
//
//поле состоит из клеток с минами и пустых клеток;
//клетки с миной обозначаются символом *;
//пустые клетки содержат число от 0 до 8 — количество мин на соседних клетках.
//Формат ввода
//В первой строке содержатся три числа:
//
//число m от 1 до 100 — количество строк на поле;
//число n от 1 до 100 — количество столбцов на поле;
//число k от 0 до mn — количество мин на поле.
//В следующих k строках содержатся пары чисел с координатами мин (номерами строки и столбца). Нумерация ведётся с единицы.
//
//Формат вывода
//Выведите построенное поле, разделяя строки поля символом \n, а столбцы — пробелом.

#include <iostream>
#include <vector>

void increaseField(char &field) {
    if (field == '*')
    {
        return;
    }
    int number = field - '0';
    number++;
    char newSymbol = '0' + number;
    field = newSymbol;

    return;
}

void sapper()
{
    int m, n, k, x, y;
    std::cin >> m >> n >> k;

    std::vector<std::vector<char>> matrix(m, std::vector<char>(n, '0'));

    for (int i = 0; i < k; ++i)
    {
        std::cin >> x >> y;
        matrix[x-1][y-1] = '*';
        
        if (x - 2 >= 0)
        {
            increaseField(matrix[x-2][y-1]);
        }
        if (y - 2 >= 0)
        {
            increaseField(matrix[x-1][y-2]);
        }
        if (x - 2 >= 0 && y - 2 >= 0)
        {
            increaseField(matrix[x-2][y-2]);
     }
        if (x < m)
        {
            increaseField(matrix[x][y-1]);
        }
        if (y < n)
        {
            increaseField(matrix[x-1][y]);
     }
        if (x < m && y < n)
        {
            increaseField(matrix[x][y]);
        }
        if (x < m && y - 2 >= 0)
        {
            increaseField(matrix[x][y-2]);
     }
        if (x - 2 >= 0 && y < n)
        {
            increaseField(matrix[x-2][y]);
        }
    }

    for (int i = 0; i != m; ++i) {
        for (int j = 0; j != n; ++j) {
            std::cout << matrix[i][j];
            if (j != n - 1)
            {
                std::cout << " ";
            }
        }
        if (i != m - 1)
        {
            std::cout << "\n";
        }
    }
}
