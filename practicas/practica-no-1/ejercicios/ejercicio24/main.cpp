#include <iostream>
using namespace std;

int main() {
    int N;

    // Se pide el tamaño del cuadrado
    cout << "Ingrese el tamaño del cuadrado: ";
    cin >> N;

    // Se recorren las filas del cuadrado
    for (int i = 1; i <= N; i++) {

        // Se recorren las columnas del cuadrado
        for (int j = 1; j <= N; j++) {

            // Se imprimen los bordes con '+'
            if (i == 1 || i == N || j == 1 || j == N) {
                cout << "+";
            }
            // El interior queda vacío
            else {
                cout << " ";
            }
        }

        // Se pasa a la siguiente fila
        cout << endl;
    }

    return 0;
}