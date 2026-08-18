#include <iostream>
using namespace std;

int main() {
    int N;
    int cantidad = 0;

    // Se pide el numero al usuario
    cout << "Ingrese un numero: ";
    cin >> N;

    // Se cuentan los digitos del numero
    do {
        N /= 10;
        cantidad++;
    } while (N != 0);

    // Se muestra la cantidad de digitos
    cout << "El numero tiene " << cantidad << " digitos." << endl;

    return 0;
}