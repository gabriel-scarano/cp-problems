#include <bits/stdc++.h>

using namespace std;

int main () {
    float a, b, media;

    cin >> a >> b;

    media = (a+b)/2;

    if (media >= 7) {
        cout << "Aprovado";
    } else if (media < 4) {
        cout << "Reprovado";
    } else {
        cout << "Recuperacao";
    }

    return 0;
}