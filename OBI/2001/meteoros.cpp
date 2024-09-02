#include <bits/stdc++.h>

using namespace std;

int main () {
    int x1, x2, y1, y2, x, y, n, count, i = 0;

    while (true) {
        i++;

        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;

        cin >> n;
        count = 0;

        for (int i = 1; i <= n; i++) {
            cin >> x >> y;

            if (x <= x2 && x >= x1 && y <= y1 && y >= y2) count++;
        }

        cout << "Teste " << i << endl << count << endl << " " << endl;
    }

    return 0;
}