#include <bits/stdc++.h>

using namespace std;

int main () {
    int l, r;

    cin >> l >> r;

    int max = 0;

    for (int i = l; i <= r; i++) {
        for (int j = i; j <= r; j++)  {
            if ((i ^ j) > max) max = (i ^ j);
        }
    }

    cout << max;

    return 0;
}