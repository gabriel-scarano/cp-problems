#include <bits/stdc++.h>

using namespace std;

typedef struct {
    vector<int> prox;
    vector<int> dist;
} Salao;

int solve(vector<Salao> &saloes, int s, int current, int ant, int m, int start, int dist, list<int> present) {
    int maior = 0, res;
    for (int i = 0; i < saloes[current].prox.size(); i++) {

        if (current == start && dist != 0) return saloes[current].dist[i];


        if (i != ant) {
            for (int j = 0; j < present.size(); j++) {
                
            }
            present.push_back(i);
            res = saloes[current].dist[i] + solve(saloes, s, i, current, m, start, dist + saloes[current].dist[i], present);
            if (res > maior) maior = res;
        }
    }

    return maior;
}

int main () {
    vector<Salao> saloes(10001);
    int s, t, a, b, c, q, x, m;

    cin >> s >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> t;

        saloes[a].dist.push_back(t);
        saloes[b].dist.push_back(t);
        saloes[a].prox.push_back(b);
        saloes[b].prox.push_back(a);
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> x >> m;
        list<int> present(1, x);

        cout << solve(saloes, s, x, x, m, x, 0, present) << endl;
    }
    
    return 0;
}