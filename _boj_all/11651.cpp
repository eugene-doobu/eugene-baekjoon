#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n; cin >> n; vector<pair<int, int>> v(n);
	for (int i = 0; i < n; ++i) {
		int a, b; cin >> a >> b;
		v[i] = { a, b };
	}
	sort(v.begin(), v.end(), [](const auto& x, const auto& y){
		if (x.second != y.second) return x.second < y.second;
		else return x.first < y.first;
		});

	for (int i = 0; i < n; ++i) cout << v[i].first << ' ' << v[i].second << "\n";
}