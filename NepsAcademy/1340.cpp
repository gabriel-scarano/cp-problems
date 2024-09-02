#include <bits/stdc++.h>

using namespace std;

bool verifyPlano (tuple<int, int, int, int> &plano, tuple<int, int, int> planeta) {
    return get<0>(planeta) * get<0>(plano) + get<1>(planeta) * get<1>(plano) + get<2>(planeta) * get<2>(plano) == get<3>(plano);
}

int main () {
    int a, b, c, d, m, n, x, y, z, res = 0, aux, j;
    vector<tuple<int, int, int, int>> planos;

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c >> d;
        planos.push_back(make_tuple(a, b, c, d));
    }

    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        aux = 0;

        for (j = 0; j < m; j++) {
            if (verifyPlano(planos[j], make_tuple(x, y, z))) aux++;
        }

        if (aux > res) res = aux;
    }

    cout << res;

    return 0;
}