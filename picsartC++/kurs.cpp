#include <iostream>

int main() {
    int x[10][10], n;

    do {
        std::cout << "n = ";
        std::cin >> n;
    } while (n < 2 || n > 10);

    // Fill the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> x[i][j];
        }
    }

    int max = x[0][0];
    int index = 0;

    // Находим наибольший элемент и его индекс
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (max < x[i][j]) {
                max = x[i][j];
                index = i;
            }
        }
    }

    // Проверяем, есть ли ещё такие максимальные элементы
    for (int i = 0; i < n; ++i) {
        if (i != index) {
            for (int j = 0; j < n; ++j) {
                if (max == x[i][j]) {
                    std::cout << "Наибольший элемент не является единственным. Пожалуйста, введите матрицу заново." << std::endl;
                    return 1; // Возвращаем ненулевой код ошибки и завершаем программу
                }
            }
        }
    }

    // Выводим матрицу без строки с максимальным элементом
    std::cout << "\nMatrix:\n";
    for (int i = 0; i < n; ++i) {
        if (i != index) {
            std::cout << "[" << i << "]: ";
            for (int j = 0; j < n; ++j) {
                std::cout << x[i][j] << ' ';
            }
            std::cout << std::endl;
        }
    }

    // Выводим строку с максимальным элементом
    std::cout << "\nMax line:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << x[index][i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
