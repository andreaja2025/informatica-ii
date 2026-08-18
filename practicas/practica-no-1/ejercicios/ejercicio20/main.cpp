#include <iostream>
using namespace std;

int main() {
    int N;
    int original;
    int invertido = 0;

    // Se pide el numero al usuario
    cout << "Ingrese un numero: ";
    cin >> N;

    // Se guarda el numero original para compararlo al final
    original = N;

    // Se invierte el numero
    while (N > 0) {
        int digito = N % 10;
        invertido = invertido * 10 + digito;
        N /= 10;
    }

    // Se compara el numero original con el numero invertido
    if (original == invertido) {
        cout << original << " es un numero palindromo." << endl;
    } else {
        cout << original << " NO es un numero palindromo." << endl;
    }

    return 0;
}