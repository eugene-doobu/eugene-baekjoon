#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, m; cin >> n >> m; vector<int> v(n), c(n, 0); for (int i = 1; i <= n; ++i) v[i-1] = i;
	for (int i = 1; i <= m; ++i) c[c.size() - i] = 1;
	vector<vector<int>> rst;
	do {
		vector<int> tmp;
		for (int i = 0; i < n; ++i) if (c[i]) tmp.push_back(v[i]);
		rst.push_back(tmp);
	} while (next_permutation(c.begin(), c.end()));
	sort(rst.begin(), rst.end());
	for (auto& _rst : rst) {
		for(auto& i : _rst) cout << i << ' ';
		cout << "\n";
	}
}