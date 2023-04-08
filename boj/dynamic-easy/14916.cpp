#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int dp[100001];

int main() {
	fastio;
	int n; cin >> n;
	fill(dp, dp + 100001, IMPOSSIBLE);
	dp[2] = 1; dp[5] = 1;
	for (int i = 2; i <= n; ++i) {
		if (dp[i] == 0) continue;
		dp[i + 2] = min(dp[i + 2], dp[i] + 1);
		dp[i + 5] = min(dp[i + 5], dp[i] + 1);
	}
	cout << ((dp[n] == IMPOSSIBLE) ? -1 : dp[n]);
}
