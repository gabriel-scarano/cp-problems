#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> d(7);
    int i = 0, n, x, y, count = 0;

    while(++i) {
        cin >> n;

        if (!n) break;

        for (int j = 0; j < 7; j++) {
            d[j] = 0;
        }

        while (n--) {
            cin >> x >> y;
            d[x]++;
            d[y]++;
        }

        cout << "Teste " << i << endl;

        count = 0;

        bool achou = false;

        for (int j = 0; j < 7; j++) {
            if (d[j] % 2 != 0) count++;

            if (count > 2) {
                cout << "nao" << endl;
                achou = true;
                break;
            }
        }

        if (!achou) cout << "sim" << endl;

        cout << endl;
    }

    return 0;
}