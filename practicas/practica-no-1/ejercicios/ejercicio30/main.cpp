#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int A, B;
    int intentos = 0;

    // Se genera un numero aleatorio entre 0 y 100
    srand(time(0));
    A = rand() % 101;

    // Se piden numeros hasta que el usuario adivine
    do {
        cout << "Adivine el numero: ";
        cin >> B;

        // Se cuenta cada intento realizado
        intentos++;

        // Se indica si el numero ingresado es mayor o menor
        if (B > A) {
            cout << "El numero es menor." << endl;
        } else if (B < A) {
            cout << "El numero es mayor." << endl;
        }

    } while (B != A);

    // Se muestra el resultado y la cantidad de intentos
    cout << "¡Adivinaste el numero!" << endl;
    cout << "El numero era: " << A << endl;
    cout << "Numero de intentos: " << intentos << endl;

    return 0;
}