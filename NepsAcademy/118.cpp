#include <bits/stdc++.h>

using namespace std;

int main () {
    string vogais, palavra;
    char c[2];

    cin >> palavra;

    for (int i = 0; i < palavra.size(); i++)
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') 
            vogais.push_back(palavra[i]);

    string rVogais(vogais.rbegin(), vogais.rend());

    if (vogais == rVogais) {
        cout << "S";
    } else {
        cout << "N";
    }

    return 0;
}