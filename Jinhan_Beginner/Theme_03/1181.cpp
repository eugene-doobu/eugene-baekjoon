#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	set<string> s;
	int n; vector<string> v; cin >> n; for (int i = 0; i < n; i++){
		string t; cin >> t; 
		if (!s.count(t)) { v.push_back(t); s.insert(t); }
	}
	sort(v.begin(), v.end(), [](const string& a, const string& b) {
		if (a.size() != b.size()) return a.size() < b.size();
		return a < b;
		}); for (auto i : v) cout << i << "\n";
}