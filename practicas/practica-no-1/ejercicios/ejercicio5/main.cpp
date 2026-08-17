#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "Ingrese el numero A: ";
    cin >> A;

    cout << "Ingrese el numero B: ";
    cin >> B;

    int resultado = (A + B / 2) / B;

    cout << A << "/" << B << "=" << resultado << endl;

    return 0;
}