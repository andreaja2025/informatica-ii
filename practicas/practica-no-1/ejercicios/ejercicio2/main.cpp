#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "Ingrese el numero N: ";
    cin >> N;

    if (N % 2 == 0)
    {
        cout << N << " es par" << endl;
    }
    else
    {
        cout << N << " es impar" << endl;
    }

    return 0;
}