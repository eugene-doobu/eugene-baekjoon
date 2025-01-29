#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

struct T
{
	int x;
	int y;
	int nums;
};

int m[1001][1001];
int v[1001][1001][2];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {
	fastio; int r, c; cin >> r >> c;
	for (int i = 0; i < 1001; i++) { memset(m[i], -1, sizeof(int) * 1001); } // TODO: remove
	for (int x=0; x<r; ++x)
	{
		string s; cin >> s;
		for (int y=0; y<c; ++y)
			m[x][y] = s[y] - '0';
	}
	int nums = 0;
	if (m[0][0] == 1)
	{
		nums = 1;
	}
	v[0][0][1] = 1;
	queue<T> q; q.push({ 0, 0, nums}); v[0][0][0] = 1;
	while (!q.empty())
	{
		auto [x, y, num] = q.front(); q.pop();
		if (x == r - 1 && y == c - 1)
		{
			cout << v[x][y][num];
			return 0;
		}
		for (int i=0; i<4; ++i)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (v[nx][ny][num] > 0) continue;
			if (m[nx][ny] == 1)
			{
				if (num > 0) continue;
				v[nx][ny][1] = v[x][y][0] + 1;
				q.push({ nx, ny, num + 1 });
			}
			else
			{
				v[nx][ny][num] = v[x][y][num] + 1;
				q.push({ nx, ny, num });
			}
		}
	}
	cout << -1;
	return 0;
}