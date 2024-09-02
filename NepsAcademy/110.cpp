#include <bits/stdc++.h>
#define LIMIT 10000

using namespace std;

int main () {
    vector<int> numeros(LIMIT);
    int n, v, maior = 0, ant, maior_aux = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    ant = numeros[0];

    for (int i = 0; i < n; i++) {
        if (numeros[i] == ant) {
            maior_aux++;
        } else {
            if (maior_aux > maior) {
                maior = maior_aux;
            }

            maior_aux = 1;
        }

        ant = numeros[i];
    }

    if (maior_aux > maior) {
        maior = maior_aux;
    }

    maior_aux = 1;

    cout << maior;

    return 0;
}