#include <bits/stdc++.h>

using namespace std;

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sumDigits(n / 10);
}

bool customCompare(int a, int b)
{
    return a > b;
}

void quickSort(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end(), customCompare);
}

int solve(vector<int> &v, int n, int k)
{
    vector<int> r(n - 1);
    int nAux, j, res = 0, hm;
    int count = 0;
    int aux = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        nAux = v[i];
        r[i] = r[i - 1];

        while (nAux > v[i + 1])
        {
            count++;

            if (count == k) {
                aux = i;
            }
            cout << nAux << " " << v[i + 1] << endl;
            nAux -= sumDigits(nAux);
            r[i]++;
        }

        v[i] -= nAux;
    }

    

    for (int i = 1; i <= n-1; i++)
        cout << v[i] << " ";
    
    cout << endl;

    return res;
}

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    quickSort(v);

    cout << solve(v, n, k);

    return 0;
}