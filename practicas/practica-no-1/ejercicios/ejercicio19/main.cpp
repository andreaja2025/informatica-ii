#include <iostream>
using namespace std;

int main() {
    int N;
    bool esPrimo = true;

    // Se pide el numero al usuario
    cout << "Ingrese un numero: ";
    cin >> N;

    // Los numeros menores que 2 no son primos
    if (N < 2) {
        esPrimo = false;
    } else {

        // Se buscan divisores diferentes de 1 y del mismo numero
        for (int i = 2; i < N; i++) {

            // Si el residuo es 0, el numero tiene otro divisor y no es primo
            if (N % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    // Se muestra si el numero es o no primo
    if (esPrimo) {
        cout << N << " es un numero primo." << endl;
    } else {
        cout << N << " NO es un numero primo." << endl;
    }

    return 0;
}