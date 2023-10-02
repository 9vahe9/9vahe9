#include <iostream>

int main() {
    const int rows1 = 3, cols1 = 3;
    const int rows2 = 3, cols2 = 3;

    int matric1[rows1][cols1];
    std::cout << "matric 1:" << std::endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cin >> matric1[i][j]; 
        }
    }

    int matric2[rows2][cols2];
    std::cout << "matric 2:" << std::endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cin >> matric2[i][j]; 
        }
    }

    int result[rows1][cols2]; //sarqum enq matric arjeqner@ stanalu hamar

   
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matric1[i][k] * matric2[k][j];
            }
        }
    }

    std::cout << "matric result:" << std::endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
