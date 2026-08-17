#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "Ingrese el numero A: ";
    cin >> A;

    cout << "Ingrese el numero B: ";
    cin >> B;

    if (A < B)
    {
        cout << "El menor es " << A << endl;
    }
    else
    {
        cout << "El menor es " << B << endl;
    }

    return 0;
}