#include <bits/stdc++.h>
#include <unordered_map>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	map<int, string> is; map<string, int> si; int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) { string s; cin >> s; is[i] = s; si[s] = i; };
	for (int i = 0; i < m; i++) {
		string s; cin >> s;
		if (isalpha((char)s[0])) cout << si[s] << "\n";
		else cout << is[stoi(s)] << "\n";
	}
}