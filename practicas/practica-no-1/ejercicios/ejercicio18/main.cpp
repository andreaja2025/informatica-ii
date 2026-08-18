#include <iostream>
using namespace std;

int main() {
    int N;

    // Se pide el numero al usuario
    cout << "Ingrese un numero: ";
    cin >> N;

    // Se busca si existe un numero que multiplicado por si mismo sea igual a N
    bool cuadradoPerfecto = false;

    for (int i = 1; i * i <= N; i++) {

        // Si i por i es igual a N, entonces es un cuadrado perfecto
        if (i * i == N) {
            cuadradoPerfecto = true;
            break;
        }
    }

    // Se muestra si el numero es o no un cuadrado perfecto
    if (cuadradoPerfecto) {
        cout << N << " es un cuadrado perfecto." << endl;
    } else {
        cout << N << " NO es un cuadrado perfecto." << endl;
    }

    return 0;
}