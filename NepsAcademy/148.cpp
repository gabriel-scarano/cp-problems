#include <bits/stdc++.h>

using namespace std;

int main () {
    int b, c;

    cin >> b >> c;

    if ((b + c) % 2 == 0) {
        cout << "Bino";
    } else {
        cout << "Cino";
    }

    return 0;
}