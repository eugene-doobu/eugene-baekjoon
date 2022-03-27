#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int E[1001][1001];

int ED(string x, string y, int ins, int del, int chg) {
    int n = x.size(), m = y.size();
    for (int i = 1; i <= n; ++i)
        //E[i][0] = E[i - 1][0] + del;
        E[i][0] = i;
    for (int j = 1; j <= m; ++j)
        //E[0][j] = E[0][j - 1] + ins;
        E[0][j] = j;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int c = (x[i-1] == y[j-1]) ? 0 : chg;
            E[i][j] = min(min(E[i - 1][j] + del, E[i][j - 1] + ins), E[i - 1][j - 1] + c );
        }
    }
    return E[n][m];
}

int main() {
    fastio;
    string from, to; cin >> from >> to;
    cout << ED(from, to, 1, 1, 1);
}
