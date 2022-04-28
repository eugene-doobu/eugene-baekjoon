#include <bits/stdc++.h>
#include <regex>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int INF = 0x3f3f3f3f;
int d[103][103];
int n, m;

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        fill(d[i], d[i] + 1 + n, INF);
    while (m--) {
        int a, b, c;
        cin >> a >> b >> c;
        // 버스가 여러개일 때 가장 짧은 버스 이용
        d[a][b] = min(d[a][b], c);
    }
    // 대각선은 자기 자신으로의 이동을 뜻하므로 0
    for (int i = 1; i <= n; i++) d[i][i] = 0;
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[i][j] == INF) cout << "0 ";
            else cout << d[i][j] << ' ';
        }
        cout << '\n';
    }
}