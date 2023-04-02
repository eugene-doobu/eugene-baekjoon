#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[101][10001];
#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n, k; cin >> n >> k;
	vector<int> v(n); for (int i = 0; i < n; ++i) cin >> v[i];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= k; ++j)
			dp[i][j] = IMPOSSIBLE;
		dp[i][0] = 0;
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j <= k + 1; ++j) {
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			int jj = j + v[i];
			if (jj <= k) dp[i][jj] = min(dp[i][jj], dp[i][j] + 1);
		}
	if (dp[n - 1][k] == IMPOSSIBLE) cout << "-1";
	else cout << dp[n - 1][k];
}
