#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n; cin >> n; vector<int> v;
	for (int i = 0; i < n; i++) { int t; cin >> t; v.push_back(t); }
	bool has = next_permutation(v.begin(), v.end());
	if (has) for (auto& num : v) cout << num << ' ';
	else cout << -1;
}