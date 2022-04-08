#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int board[502][502];
bool visited[502][502];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main() {
    fastio;
    int n, m, cnt=0, _max=0; cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }
    queue<pair<int, int>> q;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j] && board[i][j] == 1) {
                int tmp = 0;
                visited[i][j] = true; q.push({ i,j });
                cnt++;
                while (!q.empty()) {
                    auto curr = q.front(); q.pop();
                    tmp++;
                    for (int dir = 0; dir < 4; ++dir) {
                        int nx = curr.first  + dx[dir];
                        int ny = curr.second + dy[dir];
                        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                        if (visited[nx][ny] || board[nx][ny] != 1) continue;
                        visited[nx][ny] = true;
                        q.push({ nx, ny });
                    }
                }
                _max = max(_max, tmp);
            }
        }
    }
    cout << cnt << "\n" << _max;
}