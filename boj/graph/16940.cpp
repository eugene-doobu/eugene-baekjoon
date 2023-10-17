#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

struct VertexData
{
	int value; // 디버깅용
	int depth;
	int parent;
};

int n, visited[100'001], inv[100'001];
vector<int> adj[100'001];
VertexData vd[100'001];

int rst()
{
	memset(visited, 0, sizeof(visited));
	for (int i=1; i<=n; ++i)
	{
		cin >> visited[i];
		inv[visited[i]] = i;

		if (i == 1 && visited[i] != 1) return 0;
	}
	int prevIdx = 1;
	for (int i = 2; i <= n; i++) {
		int idx = visited[i];
		if (vd[prevIdx].depth > vd[idx].depth)
		{
			return 0;
		}

		if (inv[vd[prevIdx].parent] > inv[vd[idx].parent])
		{
			return 0;
		}
		prevIdx = idx;
	}
	return 1;
}

int main()
{
	fastio;
	cin >> n;
	memset(visited, 0, sizeof(visited));

	// Input Graph
	for (int i = 0; i < n-1; i++) {
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	// BFS
	{
		queue<int> Q; Q.push(1), visited[1] = 1;
		vd[1] = VertexData{1, 0, 0 };
		while (!Q.empty()) {
			auto curr = Q.front(); Q.pop();
			for (const auto& nxt : adj[curr]) {
				if (visited[nxt]) continue;
				Q.push(nxt), visited[nxt] = 1;
				vd[nxt] = VertexData{nxt, vd[curr].depth + 1, curr };
			}
		}
	}
	cout << rst();
}
