#include <bits/stdc++.h>
#define LIMIT 100000

using namespace std;

int main () {
    int n, i = 0;
    vector<int> v(LIMIT);
    set<int> novaOrdem;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while (i < n-1) {
        if (v[i] > v[i+1]) {
            if (i < n/2) {
                novaOrdem.insert(v[i]);
                v.erase(v.begin()+i);
                i--;
            } else {
                novaOrdem.insert(v[i+1]);
                v.erase(v.begin()+i+1);
            }

            n--;
        } else {
            i++;
        }
    }

    cout << novaOrdem.size() << endl;

    for (const auto it : novaOrdem) {
        cout << it << " ";
    }

    return 0;
}