#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;

    cin >> n;

    if (n > 0) {
        cout << "positivo";
    } else if (n < 0) {
        cout << "negativo";
    } else {
        cout << "nulo";
    }

    return 0;
}