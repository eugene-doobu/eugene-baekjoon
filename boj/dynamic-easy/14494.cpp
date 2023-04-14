#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[1001][1001];

int main() {
	fastio;
	int n, m; cin >> n >> m;
	dp[1][1] = 1;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			dp[i][j] = max(dp[i][j], (dp[i - 1][j] + dp[i][j - 1] + dp[i - 1][j - 1]) % 1000000007);
	cout << dp[n][m];
}
