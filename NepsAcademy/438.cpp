#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int votes;
    bool isCarlos;
    int ind;
} Pessoa;

bool compare(Pessoa a, Pessoa b) {
    return a.votes > b.votes || (a.votes == b.votes && a.ind < b.ind); // Retorna true se 'a' deve vir antes de 'b'
}

bool compare(int a, int b) {
    return a < b;
}

int main () {
    int n, v;
    vector<Pessoa> pessoas;
    
    cin >> n >> v;

    Pessoa pessoa;
    pessoa.votes = v;
    pessoa.isCarlos = true;
    pessoa.ind = 0;
    pessoas.push_back(pessoa);

    for (int i = 1; i < n; i++) {
        cin >> v;

        Pessoa pessoa;
        pessoa.votes = v;
        pessoa.isCarlos = false;
        pessoa.ind = i;
        pessoas.push_back(pessoa);
    }

    sort(pessoas.begin(), pessoas.end(), compare);
    

    if (pessoas[0].isCarlos) cout << "S";
    else cout << "N";

    return 0;
}