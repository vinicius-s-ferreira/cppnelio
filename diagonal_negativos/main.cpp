#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, cont;


    cout << "Qual a ordem da matriz? " << endl;
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];

    }
    }

    cout << "Diagonal principal: " << endl;
    for (int i = 0; i < n; i++){
        cout << mat[i][i] << " ";
    }
    cout << endl;

    cont = 0;
     for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
                if (mat[i][j] < 0){
                    cont++;
                }
            }
        }

        cout << "Quantidade de negativos: " << cont << endl;
    return 0;
}
