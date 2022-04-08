#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

typedef pair<int, int> pii;
const int INF = 0x7f7f7f7f;
int V, E, st, dist[20002];
vector<pii> adj[20001];

int main() {
	fastio;
	cin >> V >> E >> st;
	fill(dist + 1, dist + V + 1, INF);
	for (int i = 0; i < E; ++i) {
		int u, v, w; cin >> u >> v >> w;
		adj[u].push_back({ w,v });
	}
	priority_queue<pii, vector<pii>, greater<pii>> PQ;
	dist[st] = 0;
	PQ.push({ dist[st], st });
	while (!PQ.empty()) {
		auto [cost, idx] = PQ.top(); PQ.pop();
		if (dist[idx] != cost) continue;
		for (auto [ncost, nidx] : adj[idx]) {
			if (dist[nidx] > cost + ncost) {
				dist[nidx] = cost + ncost;
				PQ.push({ dist[nidx], nidx });
			}
		}
	}
	for(int i=1; i <= V; i++) dist[i] == INF? cout << "INF\n" : cout << dist[i] << '\n';
}