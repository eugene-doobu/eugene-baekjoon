#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m;
int board[100][100];
bool visited[100][100];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void visitedInit() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = false;
        }
    }
}

int main() {
    fastio;
    int timer = 0, lastDqLen = 0, cSize = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1) cSize ++;
        }
    }

    while (cSize != 0) {
        queue<pair<int, int>> q, dq;
        q.push({ 0,0 }); visited[0][0] = true;
        timer++;
        visitedInit();
        while (!q.empty()) {
            auto curr = q.front(); q.pop();
            for (int i = 0; i < 4; ++i) {
                int nx = curr.first + dx[i];
                int ny = curr.second + dy[i];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (visited[nx][ny]) continue;

                visited[nx][ny] = true;
                if (board[nx][ny] == 1) {
                    dq.push({ nx, ny });
                    continue;
                }

                q.push({ nx,ny });
            }
        }
        lastDqLen = dq.size();
        while (!dq.empty()) {
            auto curr = dq.front(); dq.pop();
            board[curr.first][curr.second] = 0;
            cSize--;
        }
    }
    cout << timer;
    cout << "\n" << lastDqLen;
}
