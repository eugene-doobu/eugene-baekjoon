#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using pii = pair<int, int>;
int m[102][102], v[102][102];
int main() {
	int r, c, k, x, y, rst = 0; cin >> r >> c >> k;
	for (int i=0; i<k; ++i)
	{
		cin >> x >> y;
		m[x][y] = 1;
	}

	queue<pii> q;
	for (int i=1; i<=r; ++i)
	{
		for (int j = 1; j <= c; ++j)
		{
			if (v[i][j] || m[i][j] == 0) continue;

			int sz = 0;
			q.push({ i, j }); v[i][j] = true;
			while (q.size())
			{
				sz++;
				auto [xx, yy] = q.front(); q.pop();
				for (int d= 0; d<4; ++d)
				{
					const int nx = xx + "0121"[d] - '1';
					const int ny = yy + "1012"[d] - '1';
					if (nx < 0 || nx > r || ny < 0 || ny > c) continue;
					if (m[nx][ny] == 0 || v[nx][ny]) continue;
					q.push({ nx, ny }); v[nx][ny] = true;
				}
			}
			rst = max(rst, sz);
		}
	}

	cout << min(rst, k);
}