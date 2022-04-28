#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	int n; vector<string> v; cin >> n; for (int i = 0; i < n; ++i) { string s; cin >> s; v.push_back(s); };
	if (is_sorted(v.begin(), v.end())) cout << "INCREASING";
	else if (is_sorted(v.rbegin(), v.rend())) cout << "DECREASING";
	else cout << "NEITHER";
}