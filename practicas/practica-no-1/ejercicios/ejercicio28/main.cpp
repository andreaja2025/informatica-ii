#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    double pi = 0.0;

    // Se pide la cantidad de elementos que se van a usar
    cout << "Ingrese el numero de elementos: ";
    cin >> N;

    // Se calcula la aproximacion de pi usando la serie
    for (int i = 0; i < N; i++) {
        double termino = 1.0 / (2 * i + 1);

        // Los signos se van alternando entre positivo y negativo
        if (i % 2 == 0) {
            pi += termino;
        } else {
            pi -= termino;
        }
    }

    // Se multiplica la suma por 4 para obtener la aproximacion de pi
    pi *= 4;

    // Se muestra el resultado con 5 decimales
    cout << fixed << setprecision(5);
    cout << "pi es aproximadamente: " << pi << endl;

    return 0;
}