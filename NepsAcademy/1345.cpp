#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m, i, x, count = 0;

    cin >> n >> m;

    while (n--) {
        bool todos = true;

        for (i = 0; i < m; i++) {
            cin >> x;
            if (x == 0) todos = false;
        }

        if (todos) count++;
    }

    cout << count;

    return 0;
}