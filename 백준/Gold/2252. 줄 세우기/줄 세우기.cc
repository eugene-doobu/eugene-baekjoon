#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

map<int, vector<int>> graph;

int main() {
	fastio; int n, m, a, b; cin >> n >> m;
	vector<int> indegree(n + 1);
	while (m--)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		indegree[b]++;
	}
	queue<int> q;
	for (int i = 1; i <= n; ++i)
		if (!indegree[i]) q.push(i);
	vector<int> result;
	while (!q.empty())
	{
		auto value = q.front(); q.pop();
		result.push_back(value);
		for (auto outVertex : graph[value])
		{
			indegree[outVertex]--;
			if (!indegree[outVertex])
				q.push(outVertex);
		}
	}
	for (int va : result)
		cout << va << ' ';
}