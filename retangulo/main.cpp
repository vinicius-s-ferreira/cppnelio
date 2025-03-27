#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: " ;
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >>  altura;

    area = base * altura;
    perimetro = 2 * base + 2 * altura;
    diagonal = sqrt (base * base + altura * altura);

    cout << fixed << setprecision(4);
    cout << "area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "DIagonal = " << diagonal << endl;



    return 0;
}
