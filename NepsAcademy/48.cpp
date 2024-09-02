#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, soma = 0, a, dias = 0;

    cin >> n;

    while (n--) {
        cin >> a;

        soma += a;

        if (soma < 1000000) {
            dias++;
        }
    }

    cout << dias;

    return 0;
}