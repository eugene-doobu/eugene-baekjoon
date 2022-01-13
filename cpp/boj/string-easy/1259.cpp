#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string s;
	while (true) {
		bool isMatched = true;
		cin >> s; if (s == "0") break;
		for (int i = 0; i < s.size() / 2; ++i) if (s[i] != s[s.size() - i - 1]) isMatched = false;
		if (isMatched) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}