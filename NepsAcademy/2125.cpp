#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, j;
    vector<bool>v (25000001, false);

    cin >> n;

    for (int i = 2; i <= n; i++) {
        for (j = i; j <= n; j += i) {
            v[j] = !v[j];
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!v[i]) cout << i << " ";
    }

    return 0;
}