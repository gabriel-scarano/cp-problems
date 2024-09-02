#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<char> v{'N', 'L', 'S', 'O'};
    int pos = 0, n;
    char c;

    cin >> n;

    while (n--) {
        cin >> c;

        pos += c == 'D' ? 1 : -1;

        if (pos == 4) pos = 0;
        if (pos == -1) pos = 3;
    }

    cout << v[pos];

    return 0;
}