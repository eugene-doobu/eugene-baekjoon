#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int a, b, rst=0; char q; cin >> a >> b >> q;
	for (int i = a; i <= b; ++i) {
		string s = to_string(i);
		for (char c : s) if (c == q) rst++;
	}
	cout << rst;
}
