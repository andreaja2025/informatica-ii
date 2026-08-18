#include <iostream>
using namespace std;

int main() {
    int A, B;
    int mcm;

    // Se piden los dos numeros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> A;

    cout << "Ingrese el segundo numero: ";
    cin >> B;

    // Se empieza a buscar desde el mayor de los dos numeros
    mcm = (A > B) ? A : B;

    // Se busca el primer numero que sea divisible entre A y B
    while (mcm % A != 0 || mcm % B != 0) {
        mcm++;
    }

    // Se muestra el minimo comun multiplo
    cout << "El MCM de " << A << " y " << B << " es: " << mcm << endl;

    return 0;
}