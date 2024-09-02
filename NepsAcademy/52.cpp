#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, a = 0, b = 0, i;

    cin >> n;

    while (n--) {
        cin >> i;
        
        a = !a;
        
        if (i == 2) {
            b = !b;
        }
    }

    cout << a << endl << b;

    return 0;
}