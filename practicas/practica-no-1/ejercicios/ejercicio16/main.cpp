#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int cantidad = 0;

    // Se piden numeros hasta que el usuario ingrese 0
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        // El cero no se suma ni se cuenta
        if (numero != 0) {
            suma += numero;
            cantidad++;
        }

    } while (numero != 0);

    // Se calcula el promedio de los numeros ingresados
    double promedio = (double)suma / cantidad;

    // Se muestra el resultado del promedio
    cout << "El promedio es: " << promedio << endl;

    return 0;
}