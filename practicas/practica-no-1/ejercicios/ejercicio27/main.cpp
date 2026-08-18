#include <iostream>
using namespace std;

int main() {
    double A, B, resultado;
    char operacion;

    // Se piden los dos numeros y la operacion
    cout << "Ingrese el primer numero: ";
    cin >> A;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el segundo numero: ";
    cin >> B;

    // Se realiza la operacion seleccionada
    switch (operacion) {
        case '+':
            resultado = A + B;
            break;

        case '-':
            resultado = A - B;
            break;

        case '*':
            resultado = A * B;
            break;

        case '/':
            // Se verifica que no se intente dividir entre cero
            if (B == 0) {
                cout << "No se puede dividir entre cero." << endl;
                return 0;
            }

            resultado = A / B;
            break;

        default:
            cout << "Operacion no valida." << endl;
            return 0;
    }

    // Se muestra el resultado de la operacion
    cout << A << operacion << B << "=" << resultado << endl;

    return 0;
}