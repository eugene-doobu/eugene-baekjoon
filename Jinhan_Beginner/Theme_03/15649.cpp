#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, m; cin >> n >> m; vector<int> v(n), w(n);
	iota(v.begin(), v.end(), 1);
	fill(w.end() - m, w.end(), 1);

	vector<vector<int>> rst;
	do {
		vector<int> tmp;
		for (int i = 0; i < n; ++i) if (w[i]) tmp.push_back(v[i]);
		do rst.push_back(tmp);
		while (next_permutation(tmp.begin(), tmp.end()));
	} while (next_permutation(w.begin(), w.end()));

	sort(rst.begin(), rst.end());
	for (auto& i : rst) {
		for (auto& j : i) cout << j << ' ';
		cout << '\n';
	}
}