#include <iostream>

using namespace std;

int main()
{
    double N;
    const double pi = 3.1416;

    cout << "Ingrese el radio N: ";
    cin >> N;

    double perimetro = 2 * pi * N;
    double area = pi * N * N;

    cout << "Perimetro:" << perimetro << endl;
    cout << "Area:" << area << endl;

    return 0;
}