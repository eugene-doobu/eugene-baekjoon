#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using pii = pair<int, int>;
int m[102][102], v[102][102];
int main() {
	int r, c, k; cin >> c >> r >> k;
	for (int i=0; i<k; ++i)
	{
		int sx, sy, ex, ey;
		cin >> sx >> sy >> ex >> ey;
		for (int x = sx; x < ex; ++x)
			for (int y = sy; y < ey; ++y)
				m[x][y] = 1;
	}
	vector<int> rst;
	queue<pii> q;
	for (int i=0; i<r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if (v[i][j] || m[i][j] == 1) continue;
			int sz = 0;
			q.push({ i, j }); v[i][j] = true;
			while (!q.empty())
			{
				auto [x, y] = q.front(); q.pop(); sz++;
				for (int d= 0; d<4; ++d)
				{
					const int nx = x + "0121"[d] - '1';
					const int ny = y + "1012"[d] - '1';
					if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
					if (m[nx][ny] == 1 || v[nx][ny]) continue;
					q.push({ nx, ny }); v[nx][ny] = true;
				}
			}
			rst.push_back(sz);
		}
	}

	cout << rst.size() << "\n";
	sort(rst.begin(), rst.end());
	for (int i=0; i<rst.size(); ++i)
		cout << rst[i] << ' ';
}