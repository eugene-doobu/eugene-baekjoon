#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio; 
	int n; cin >> n; map<int, vector<int>> m;
	for (int i = 1; i < n * 2; ++i) {
		int v; cin >> v; m[v].push_back(i);
	}
	for (int i = 1; i <= n; ++i) if (m[i].size() == 1) cout << i;
}

