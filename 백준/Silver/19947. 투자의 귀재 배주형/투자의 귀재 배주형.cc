#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[11];

int Get1(int val) { return val * 5 / 100; }
int Get3(int val) { return val * 20 / 100; }
int Get5(int val) { return val * 35 / 100; }

int main() {
	fastio; int val, n; cin >> val >> n; dp[0] = val;
	for (int i = 1; i <= n; ++i) {
		dp[i] = max(dp[i], dp[i - 1] + Get1(dp[i - 1]));
		if (i >= 3) dp[i] = max(dp[i], dp[i - 3] + Get3(dp[i - 3]));
		if (i >= 5) dp[i] = max(dp[i], dp[i - 5] + Get5(dp[i - 5]));
	}
	cout << dp[n];
}