#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool visited[101];

int main() {
	fastio;
	int n, m, cnt = 0; cin >> n >> m;
	vector<vector<int>> v;
	for (int i = 0; i <= n; ++i){ vector<int> tmp; v.push_back(tmp); }
	for (int i = 1; i <= m; ++i) {
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	queue<int> q; q.push(1); visited[1] = true;
	while (!q.empty()) {
		int curr = q.front(); q.pop();
		for (int next : v[curr]) {
			if (visited[next]) continue;
			visited[next] = true; q.push(next);
			cnt++;
		}
	}
	cout << cnt;
}