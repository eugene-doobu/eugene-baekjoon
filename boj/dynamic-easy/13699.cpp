#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[37];

int main() {
	fastio;
	int n; cin >> n;
	dp[0] = 1;
	for (int i = 1; i <= n; ++i) {
		long long  val = 0;
		for (int j = 1; j <= i; ++j) val += dp[j - 1] * dp[i - j];
		dp[i] = val;
	}
	cout << dp[n];
}
