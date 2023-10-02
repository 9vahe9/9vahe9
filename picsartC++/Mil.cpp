#include <iostream>
using namespace std;

int Gumar_miachap(int x[], int S, int n);
int Gumar(int a, int b);

int main() {
    int n, i, j, S = 0, y[10], x[10][10];

    do {
        cout << "n=";
        cin >> n;
    } while (n < 2 || n > 10);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> x[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        S = Gumar_miachap(x[i], S, n);
        y[i] = Gumar(x[i][n - i - 1], S);
    }

    for (i = 0; i < n; i++) {
        cout << "y[" << i << "]=" << y[i] << endl;
    }

    return 0;
}

int Gumar_miachap(int x[], int S, int n) {
    for (int i = 0; i < n; i++) {
        S += x[i];
    }
    return S;
}

int Gumar(int a, int b) {
    int S = a + b;
    return S;
}
