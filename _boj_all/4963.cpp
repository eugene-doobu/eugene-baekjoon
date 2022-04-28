#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int dx[8] = { 1,0,-1,0 ,1,1,-1,-1 };
int dy[8] = { 0, 1, 0, -1, 1, -1, 1, -1 };

bool v[51][51];
int m[51][51];

void InitV(int h, int w) {
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			v[i][j] = false;
		}
	}
}

void InputM(int h, int w) {
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cin >> m[i][j];
		}
	}
}

int main() {
	fastio;
	while (true) {
		int cnt = 0;
		int w, h; cin >> w >> h;
		if (w == 0 && h == 0) break;
		InitV(h, w); InputM(h, w);

		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				if (v[i][j] || m[i][j]==0) continue;
				cnt++;
				queue<pair<int, int>> q;
				q.push({ i,j }); v[i][j] = true;

				while (!q.empty()) {
					auto curr = q.front(); q.pop();
					for (int k = 0; k < 8; ++k) {
						int nx = curr.first + dx[k];
						int ny = curr.second + dy[k];
						if (nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
						if (v[nx][ny]) continue;
						if (m[nx][ny] == 0) continue;
						q.push({ nx, ny }); v[nx][ny] = true;
					}
				}
			}
		}
		cout << cnt << "\n";
	}
}