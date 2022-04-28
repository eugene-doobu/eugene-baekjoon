#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n; cin >> n; vector<int> v; for (int i = 0; i < n; ++i) { int tmp; cin >> tmp; v.push_back(tmp); }
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (auto& m : v) cout << m << ' ';
}