#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

string board[101];
bool visited[101][101];
int dist[101][101];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main() {
    fastio;
    int n, m, cnt=0; cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> board[i];
    queue<pair<int, int>> q;

    visited[0][0] = true; q.push({ 0,0 }); dist[0][0] = 1;
    while (!q.empty()) {
        auto curr = q.front(); q.pop();
        if (curr.first == n - 1 && curr.second == m - 1) break;
        cnt++;
        for (int dir = 0; dir < 4; ++dir) {
            int nx = curr.first  + dx[dir];
            int ny = curr.second + dy[dir];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (visited[nx][ny] || board[nx][ny] != '1') continue;
            visited[nx][ny] = true;
            dist[nx][ny] = dist[curr.first][curr.second] + 1;
            q.push({ nx, ny });
        }
    }

    cout << dist[n-1][m-1];
}