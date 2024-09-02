#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, soma = 0, a;

    cin >> n;

    for (int i = 0; i < n*2-1; i++) {
        cin >> a;
        soma += a;
    }

    cout << ((n+1) * n) - soma;

    return 0;
}