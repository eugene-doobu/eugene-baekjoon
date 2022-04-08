#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	int n; vector<int> v; cin >> n; for (int i = 0; i < n; i++) { int t; cin >> t; v.push_back(t); }
	sort(v.begin(), v.end()); for (auto i : v) cout << i << "\n";
}