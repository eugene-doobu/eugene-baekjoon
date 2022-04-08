#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool vis[100001];

int main() {
	fastio;
	int n; cin >> n;
	vector<vector<int>> v(n + 1); vector<int> rsts(n-1);
	for (int i = 1; i < n; ++i) {
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	queue<int> q; q.push(1); vis[1] = true;
	while (!q.empty()) {
		int curr = q.front(); q.pop();
		for (int cv : v[curr]) {
			if (vis[cv]) continue;
			vis[cv] = true; q.push(cv);
			rsts[cv-2] = curr;
		}
	}
	for (int rst : rsts) cout << rst << "\n";
}