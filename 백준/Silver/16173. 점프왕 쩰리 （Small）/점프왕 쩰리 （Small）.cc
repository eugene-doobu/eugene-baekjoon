#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using pii = pair<int, int>;

struct M {
    int x;
    int y;
    int val;
};

int m[3][3];
bool v[3][3];

int dx[2] = { 1, 0 };
int dy[2] = { 0, 1 };

int main() {
    fastio; int n; cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> m[i][j];

    queue<M> q; q.push({ 0, 0, m[0][0] }); v[0][0] = true;
    while (!q.empty()) {
        auto curr = q.front(); q.pop();
        for (int i = 0; i < 2; ++i) {
            int nx = curr.x + (dx[i] * curr.val);
            int ny = curr.y + (dy[i] * curr.val);
            if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if (v[nx][ny]) continue;
            if (m[nx][ny] == -1) {
                cout << "HaruHaru";
                return 0;
            }
            q.push({ nx, ny, m[nx][ny]}); v[nx][ny] = true;
        }
    }
    cout << "Hing";
}
