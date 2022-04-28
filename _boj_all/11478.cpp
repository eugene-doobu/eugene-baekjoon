#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string s; cin >> s; set<string> set_s;
	for (int i = 0; i < s.length(); ++i) {
		for (int j = 1; (i + j) <= s.length(); ++j) {
			set_s.insert(s.substr(i, j));
		}
	}
	cout << set_s.size();
}