#include <iostream>
using namespace std;

int main() {

    // Se recorren los numeros del 1 al 50
    for (int i = 1; i <= 50; i++) {

        // El segundo numero va disminuyendo desde 50 hasta 1
        int segundo = 51 - i;

        // Se imprimen los dos numeros en columnas
        cout << i << "    " << segundo << endl;
    }

    return 0;
}