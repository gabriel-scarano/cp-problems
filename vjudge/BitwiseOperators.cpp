#include <bits/stdc++.h>

using namespace std;

void maxAlgo(int n, int k) {
    int maxAND = 0;
    int maxOR = 0;
    int maxXOR = 0;

    for (int i = 1; i < n; i++) {
        for (int j = i+1; j <= n; j++) {
            if ((i & j) > maxAND && (i & j) < k) maxAND = (i & j);
            if ((i | j) > maxOR && (i | j) < k) maxOR = (i | j);
            if ((i ^ j) > maxXOR && (i ^ j) < k) maxXOR = (i ^ j);
        }
    }

    printf("%d\n%d\n%d", maxAND, maxOR, maxXOR);
}

int main () {
    int n, k;
    scanf("%d %d", &n, &k);

    maxAlgo(n, k);

    return 0;
}