#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "Ingrese el numero N: ";
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "x" << N << "=" << i * N << endl;
    }

    return 0;
}