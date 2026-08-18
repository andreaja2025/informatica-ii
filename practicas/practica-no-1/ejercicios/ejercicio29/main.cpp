#include <iostream>
using namespace std;

int main() {
    int menor = 0;
    int mayor = 100;
    int B;
    char respuesta;

    // El programa empieza buscando entre 0 y 100
    while (menor <= mayor) {
        // Se calcula un numero en la mitad del rango
        B = (menor + mayor) / 2;

        // Se muestra el numero que el programa esta intentando adivinar
        cout << "¿El numero es " << B << "? ";
        cin >> respuesta;

        // Si B es igual a A, el programa acerto
        if (respuesta == '=') {
            cout << "¡Adivine el numero! Es " << B << "." << endl;
            break;
        }

        // Si B es mayor que A, se reduce el limite superior
        else if (respuesta == '<') {
            mayor = B - 1;
        }

        // Si B es menor que A, se aumenta el limite inferior
        else if (respuesta == '>') {
            menor = B + 1;
        }

        // Se verifica que el simbolo ingresado sea valido
        else {
            cout << "Simbolo no valido. Use >, < o =." << endl;
        }
    }

    return 0;
}