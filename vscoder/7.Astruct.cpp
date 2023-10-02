#include <iostream>
#include <string.h>

struct Student {
    char azg[20], anun[20], xumb[20];
    int partq;
};

int main() {
    int N;
    std::cout << "Usanoxneri qanak: ";
    std::cin >> N;

    Student* students = new Student[N];
    
    for (int i = 0; i < N; ++i) {
        Student usanox;
        std::cout << "Usanoxi Xumb: ";
        std::cin >> usanox.xumb;
        std::cout << "Usanoxi Anun: ";
        std::cin >> usanox.anun;
        std::cout << "Usanoxi Azganun: ";
        std::cin >> usanox.azg;
        std::cout << "Partqeri qanak: ";
        std::cin >> usanox.partq;
        students[i] = usanox;
    }

    // Вывод списка студентов из группы "К111" с 3 и более долгами
    std::cout << " 'К111' xmbi usanoxneri cucak & 3-ic avel partq:" << std::endl;
    for (int i = 0; i < N; ++i) {
        if (strcmp(students[i].xumb, "К111") == 0 && students[i].partq >= 3) {
            std::cout << "Anun: " << students[i].anun;
            std::cout << ", Azganun: " << students[i].azg << std::endl;
        }
    }

    // Освобождение динамически выделенной памяти
    delete[] students;

    return 0;
}

// Функция strcmp() (сокращение от "string compare") в языке программирования C и C++ 
// предназначена для сравнения двух строк. Она сравнивает две строки символ за символом и возвращает целое число,
// которое показывает результат сравнения. Вот как работает strcmp():