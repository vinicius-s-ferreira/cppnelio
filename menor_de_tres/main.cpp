#include <bits/stdc++.h>

using namespace std;





int main()
{

    int a, b, c, menor;

    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;

    if (a < b && a < c) {
        menor = a;
    }
    else if (b < c) {
        menor = b;
    }
    else {
        menor = c;
    }

    cout << "Menor = " << menor << endl;

    return 0;
}
