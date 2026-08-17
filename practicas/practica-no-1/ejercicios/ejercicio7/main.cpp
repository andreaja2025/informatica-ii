#include <iostream>

using namespace std;

int main()
{
    int N;
    int suma = 0;

    cout << "Ingrese el numero N: ";
    cin >> N;

    for (int i = 0; i <= N; i++)
    {
        suma = suma + i;
    }

    cout << "La sumatoria desde 0 hasta " << N << " es: " << suma << endl;

    return 0;
}