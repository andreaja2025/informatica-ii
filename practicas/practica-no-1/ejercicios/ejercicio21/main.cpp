#include <iostream>
using namespace std;

int main() {
    char C;

    // Se pide un caracter al usuario
    cout << "Ingrese un caracter: ";
    cin >> C;

    // Si es una letra mayuscula, se convierte a minuscula
    if (C >= 'A' && C <= 'Z') {
        C = C + ('a' - 'A');
    }
    // Si es una letra minuscula, se convierte a mayuscula
    else if (C >= 'a' && C <= 'z') {
        C = C - ('a' - 'A');
    }

    // Se muestra la letra convertida
    cout << "Letra convertida: " << C << endl;

    return 0;
}