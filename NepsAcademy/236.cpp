#include <bits/stdc++.h>

using namespace std;

int main () {
    const int LIMIT = 10;
    int n, j, a, ant;
    bool isMagic = true;
    map<int, int> numeros;
    vector<int> somaH(LIMIT), somaV(LIMIT), somaD(2);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a;
            somaH[i] += a;
            somaV[j] += a;

            if (i == j) {
                somaD[0] += a;
            }

            if (i + j == n-1) {
                somaD[1] += a;
            }
        }
    }

    ant = somaH[0];

    for (int i = 0; i < n && isMagic; i++) {
        if (ant != somaH[i]) {
            isMagic = false;
        }
    }

    for (int i = 0; i < n && isMagic; i++) {
        if (ant != somaV[i]) {
            isMagic = false;
        }
    }

    if (somaD[0] != ant || somaD[1] != ant) {
        isMagic = false;
    }

    if (!isMagic) {
        cout << -1;
    } else {
        cout << ant;
    }

    return 0;
}