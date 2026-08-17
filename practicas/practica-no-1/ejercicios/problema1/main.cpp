#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "Ingrese el numero A: ";
    cin >> A;

    cout << "Ingrese el numero B: ";
    cin >> B;

    cout << "El residuo de la division " << A << "/" << B << " es: " << A % B << endl;

    return 0;
}