#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

bool m, o, b, i, ss;
int main() {
	fastio; 
	string s; cin >> s;
	for (char c : s) {
		if (c == 'M') m = true;
		if (c == 'O') o = true;
		if (c == 'B') b = true;
		if (c == 'I') i = true;
		if (c == 'S') ss = true;
	}
	if (m && o && b && i && ss) cout << "YES";
	else cout << "NO";
}

