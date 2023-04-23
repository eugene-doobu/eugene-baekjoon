#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[51];

int main() {
	fastio;
	int n; cin >> n;
	dp[0] = 1; dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		dp[i] = (dp[i - 1] + dp[i - 2] + 1) % 1000000007;
	}
	cout << dp[n];
}
