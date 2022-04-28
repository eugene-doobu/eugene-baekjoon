#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

long dp[1000001];
int main() {
	fastio;
	long n; cin >> n; 
	memset(dp, 0x7f, sizeof(dp)); dp[1] = 0;
	for (int i = 1; i <= n; ++i) {
		if (i * 2 <= 1000001) dp[i * 2] = min(dp[i] + 1, dp[i * 2]);
		if (i * 3 <= 1000001) dp[i * 3] = min(dp[i] + 1, dp[i * 3]);
		if (i + 1 <= 1000001) dp[i + 1] = min(dp[i] + 1, dp[i + 1]);
	} cout << dp[n];
}