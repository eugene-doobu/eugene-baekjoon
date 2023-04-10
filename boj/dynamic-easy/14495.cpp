#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[118];

int main() {
	fastio;
	int n; cin >> n;
	dp[1] = dp[2] = dp[3] = 1;
	for (int i = 4; i <= n; ++i) {
		dp[i] = dp[i - 1] + dp[i-3];
	}
	// cout << ((dp[n] == IMPOSSIBLE) ? -1 : dp[n]);
	cout << dp[n];
}
