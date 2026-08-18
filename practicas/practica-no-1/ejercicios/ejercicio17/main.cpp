#include <iostream>
using namespace std;

int main() {
    int numero;
    int mayor = 0;

    // Se piden numeros hasta que el usuario ingrese 0
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        // Se compara el numero ingresado con el mayor actual
        if (numero > mayor) {
            mayor = numero;
        }

    } while (numero != 0);

    // Se muestra el numero mayor
    cout << "El numero mayor fue: " << mayor << endl;

    return 0;
}