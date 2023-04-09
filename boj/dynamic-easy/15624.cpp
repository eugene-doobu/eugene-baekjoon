#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[1000001];

int main() {
	fastio;
	int n; cin >> n;
	// fill(dp, dp + 100001, IMPOSSIBLE);
	dp[0] = 0; dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		dp[i] = (dp[i - 1] + dp[i-2]) % 1000000007;
	}
	// cout << ((dp[n] == IMPOSSIBLE) ? -1 : dp[n]);
	cout << dp[n];
}
