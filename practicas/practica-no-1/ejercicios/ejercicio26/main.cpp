#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    // Se piden las longitudes de los tres lados
    cout << "Ingrese el primer lado: ";
    cin >> A;

    cout << "Ingrese el segundo lado: ";
    cin >> B;

    cout << "Ingrese el tercer lado: ";
    cin >> C;

    // Para formar un triangulo, la suma de dos lados debe ser mayor que el tercero
    if (A + B <= C || A + C <= B || B + C <= A) {
        cout << "Las longitudes ingresadas no forman un triangulo." << endl;
    }
    // Si los tres lados son iguales, es equilatero
    else if (A == B && B == C) {
        cout << "Se forma un triangulo equilatero." << endl;
    }
    // Si dos lados son iguales, es isosceles
    else if (A == B || A == C || B == C) {
        cout << "Se forma un triangulo isosceles." << endl;
    }
    // Si todos los lados son diferentes, es escaleno
    else {
        cout << "Se forma un triangulo escaleno." << endl;
    }

    return 0;
}