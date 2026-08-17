#include <iostream>

using namespace std;

int main()
{
    int A, B;
    int resultado = 1;

    cout << "Ingrese el numero A: ";
    cin >> A;

    cout << "Ingrese el numero B: ";
    cin >> B;

    for (int i = 0; i < B; i++)
    {
        resultado = resultado * A;
    }

    cout << A << "^" << B << "=" << resultado << endl;

    return 0;
}