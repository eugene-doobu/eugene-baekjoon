#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[1000003];

int main() {
	fastio;
	int a, k; cin >> a >> k;
	fill(dp, dp + 1000003, IMPOSSIBLE);
	dp[a] = 0;
	for (int i = a; i <= k; ++i) {
		dp[i + 1] = min(dp[i + 1], dp[i] + 1);
		if(i <= 500000)
			dp[i * 2] = min(dp[i * 2], dp[i] + 1);
	}
	cout << dp[k];
}
