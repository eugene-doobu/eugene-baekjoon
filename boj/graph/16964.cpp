#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int idx = 1, n, s[100'001], v[100'001];
set<int> adj[100'001];

int check()
{
	int parent = s[idx];
	int numOfChild = adj[parent].size() - (idx == 1 ? 0 : 1);

	v[parent] = 1; idx++;
	while(numOfChild--)
	{
		int child = s[idx];
		if (v[child]) return 0;
		if (!adj[parent].count(child)) return 0;
		if (!check()) return 0;
	}
	return 1;
}

int main()
{
	fastio;
	cin >> n;
	for (int i = 1; i < n; ++i) {
		int a, b; cin >> a >> b;
		adj[a].insert(b);
		adj[b].insert(a);
	}
	for (int i = 1; i <= n; ++i) cin >> s[i];
	if (s[1] != 1) cout << 0;
	else cout << check();
}
