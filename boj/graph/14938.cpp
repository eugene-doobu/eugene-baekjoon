#include <bits/stdc++.h>
#include <regex>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int INF = 0x3f3f3f3f;
int board[104][104];
int score[104];

int main() {
    fastio;
    int n, m, r; cin >> n >> m >> r;
    for (int i = 1; i <= n; i++)
        fill(board[i], board[i] + 1 + n, INF);
    for (int i = 1; i <= n; i++) cin >> score[i];
    for (int i = 1; i <= r; i++) {
        int a, b, c; cin >> a >> b >> c;
        board[a][b] = min(board[a][b], c);
        board[b][a] = min(board[b][a], c);
    }
    for (int i = 1; i <= n; i++) board[i][i] = 0;

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                board[i][j] = min(board[i][j], board[i][k] + board[k][j]);
    int rst = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (board[i][j] <= m)cnt += score[j];
        }
        rst = max(rst, cnt);
    }
    cout << rst;
}