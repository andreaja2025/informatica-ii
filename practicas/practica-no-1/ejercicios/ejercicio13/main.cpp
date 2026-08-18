#include <iostream>
using namespace std;

int main() {
    int N;

    // Se pide el numero al usuario
    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "Los divisores de " << N << " son:" << endl;

    // Se recorren los numeros desde 1 hasta N
    for (int i = 1; i <= N; i++) {

        // Si el residuo es 0, significa que i es divisor de N
        if (N % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}