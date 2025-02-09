#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int dp[31];
int main() {
	fastio; int n; cin >> n;
	dp[2] = 3;
	for (int i = 4; i <= n; i+=2) {
		dp[i] = dp[i - 2] * 3 + 2;
		for (int j = i; j > 2; j -= 2)
			dp[i] += dp[i - j] * 2;
	}
	cout << dp[n];
}