#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m, rst, visited[1001];
vector<int> adj[1001];

int main()
{
	fastio;
	cin >> n >> m;
	memset(visited, 0, sizeof(visited));

	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i=1; i<=n; ++i)
	{
		if (visited[i]) continue;
		queue<int> Q; Q.push(i), visited[i] = 1; rst++;
		while (!Q.empty()) {
			auto curr = Q.front(); Q.pop();
			for (const auto& nxt : adj[curr]) {
				if (visited[nxt]) continue;
				Q.push(nxt), visited[nxt] = 1;
			}
		}
	}

	cout << rst << "\n";
}
