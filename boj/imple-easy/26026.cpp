#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n, charge = 0, rst = 0; string s; cin >> n >> s;
	for (char c : s) {
		if (c == '1') {
			rst++;
			charge = 2;
		}
		else if (charge > 0) {
			charge--;
			rst++;
		}
	}
	cout << rst;
}

