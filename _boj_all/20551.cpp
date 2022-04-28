#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, m; cin >> n >> m; vector<int> a; 
	for (int i = 0; i < n; ++i) { int tmp; cin >> tmp; a.push_back(tmp); }
	sort(a.begin(), a.end());
	for (int i = 0; i < m; ++i) { 
		int tmp; cin >> tmp;
		auto b = lower_bound(a.begin(), a.end(), tmp);
		auto c = upper_bound(a.begin(), a.end(), tmp);
		if (b!=c && b != a.end()) cout << b - a.begin() << "\n";
		else cout << -1 << "\n";
	}
}