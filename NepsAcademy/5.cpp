#include <bits/stdc++.h>

using namespace std;

string solve(int h, int p, int f, int d) {
    for (int i = f; i != h; i == 15 && d == 1 ? i = 0 : i == 0 && d == -1 ? i = 15 : i += d) {
        if (i == p) {
            return "N";
        }
    }

    return "S";
}

int main () {
    int h, p, f, d;

    cin >> h >> p >> f >> d;

    cout << solve(h, p, f, d);

    return 0;
}