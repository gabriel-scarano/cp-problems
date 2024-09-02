#include <bits/stdc++.h>

using namespace std;

struct Compare {
    bool operator()(const int &a, const int &b) const {
        return a < b;
    }
};

typedef struct {
    int h;
    int v;
    char dir;
} Carro;


typedef struct {
    Carro *a;
    Carro *b;
} Colisao;

int main () {
    set<Colisao> colisoes();
    vector<Carro> carros();

}