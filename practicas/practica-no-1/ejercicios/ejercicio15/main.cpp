#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    // Se piden numeros hasta que el usuario ingrese 0
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        // Se suma el numero ingresado
        suma += numero;

    } while (numero != 0);

    // Se muestra el resultado de la sumatoria
    cout << "El resultado de la sumatoria es: " << suma << endl;

    return 0;
}