#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int v[302][302];

int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		queue<pair<int, int>> q; int j, x, y; cin >> j >> x >> y;
		for (int k = 0; k < 301; k++) fill(v[k], v[k] + 301, 0);
		q.push({ x, y }); v[x][y] = 1; 
		cin >> x >> y;
		while (!q.empty()) {
			auto curr = q.front(); q.pop();
			for (int r = 0; r < 8; ++r) {
				int nx = curr.first + dx[r];
				int ny = curr.second + dy[r];
				if (nx < 0 || nx >= j || ny < 0 || ny >= j) continue;
				if (v[nx][ny] != 0) continue;
				q.push({ nx, ny }); 
				v[nx][ny] = v[curr.first][curr.second] + 1;
			}
		}
		cout << v[x][y]-1 << '\n';
	}
}