#include <iostream>
using namespace std;

int main() {
    int segundos;

    // Se pide la cantidad de segundos al usuario
    cout << "Ingrese una cantidad de segundos: ";
    cin >> segundos;

    // Se calculan las horas, minutos y segundos
    int horas = segundos / 3600;
    segundos = segundos % 3600;

    int minutos = segundos / 60;
    segundos = segundos % 60;

    // Se muestra el resultado en formato horas:minutos:segundos
    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}