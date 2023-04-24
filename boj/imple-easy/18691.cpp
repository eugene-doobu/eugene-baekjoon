#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[51];

int main() {
	fastio;
	int n; cin >> n;
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		int q = 1;
		if (a == 2) q = 3;
		else if (a == 3) q = 5;
		int val = c - b;
		val = max(val, 0);
		cout << (val * q) << "\n";
	}
}
