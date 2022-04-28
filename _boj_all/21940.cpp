#include <bits/stdc++.h>
#include <regex>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int INF = 0x3f3f3f3f;
int d[202][202];
int kb[202];

int main() {
    fastio;
    int n, m, k; cin >> n >> m;
    for (int i = 1; i <= n; i++)
        fill(d[i], d[i] + 1 + n, INF);
    for (int i = 1; i <= m; i++) {
        int a, b, c; cin >> a >> b >> c;
        d[a][b] = min(d[a][b], c);
    }
    cin >> k;
    for (int i = 0; i < k; ++i) cin >> kb[i];

    for (int i = 1; i <= n; i++) d[i][i] = 0;
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    vector<int> rst;
    int t = INF;
    for (int q = 1; q <= n; ++q) {
        int maxGo = 0;
        for (int i = 0; i < k; ++i) {
            int go = d[kb[i]][q];
            int back = d[q][kb[i]];
            if (go == INF || back == INF) break;
            maxGo = max(maxGo, go + back);
        }
        if (t > maxGo) {
            t = maxGo;
            rst.clear();
            rst.push_back(q);
        }
        else if (t == maxGo) {
            rst.push_back(q);
        }
    }
    sort(rst.begin(), rst.end());
    for (int i : rst) cout << i << ' ';
}