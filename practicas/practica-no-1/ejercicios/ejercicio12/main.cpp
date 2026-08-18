#include <iostream>
using namespace std;

int main() {
    int N;

    // Se pide el numero al usuario
    cout << "Ingrese un numero: ";
    cin >> N;

    // Se recorren las potencias desde 1 hasta 5
    for (int i = 1; i <= 5; i++) {
        int resultado = 1;

        // Se multiplica N tantas veces como indique el exponente
        for (int j = 1; j <= i; j++) {
            resultado *= N;
        }

        // Se muestra la potencia y su resultado
        cout << N << "^" << i << "=" << resultado << endl;
    }

    return 0;
}