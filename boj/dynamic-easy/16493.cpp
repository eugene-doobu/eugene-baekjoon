#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int dp[201][301];

int main() {
	fastio;
	int n, k; cin >> n >> k;
	for (int i = 1; i <= k; ++i) {
		int q, w; cin >> q >> w;
		for (int j = 1; j <= n; ++j) {
			if (j - q >= 0) dp[i][j] = max(dp[i - 1][j], dp[i-1][j - q] + w);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[k][n];
}
