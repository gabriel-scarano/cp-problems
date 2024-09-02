#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> somaH(1000), somaV(1000);
    short int limit = 1000;
    short int mat[1000][1000];
    int n, j, x, maior = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> mat[i][j];
            somaH[i] += mat[i][j];
            somaV[j] += mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (somaH[i] + somaV[j] - mat[i][j]*2 > maior) {
                maior = somaH[i] + somaV[j] - mat[i][j]*2;
            }
        }
    }

    cout << maior;

    return 0;
}