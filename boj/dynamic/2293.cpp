#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int dp[100002];

int main() {
	fastio;
	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		int val; cin >> val;
		dp[val] += 1;
		for (int j = val; j <= k; ++j) {
			int idx = j - val;
			if (idx < 0) continue;
			dp[j] += dp[idx];
		}
	}
	cout << dp[k];
}
