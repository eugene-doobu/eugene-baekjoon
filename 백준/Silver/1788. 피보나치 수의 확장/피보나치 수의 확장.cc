#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int dp[1000001];
int main() {
	int n, v; cin >> n;
	v = (n > 0 ? 1 : (n < 0 ? -1 : 0));
	n = abs(n);
	dp[0] = 0; dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000000;
	}
	if (v == -1 && n % 2) v = 1;
	cout << v << "\n" << dp[n];
}