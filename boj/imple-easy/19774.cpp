#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		int a = (s[0] - '0') * 10 + s[1] - '0';
		int b = (s[2] - '0') * 10 + s[3] - '0';
		a = a * a;
		b = b * b;
		if ((a + b) % 7 == 1) cout << "YES\n";
		else cout << "NO\n";
	}
}

