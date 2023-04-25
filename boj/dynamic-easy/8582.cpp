#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[2][1000001], val[1000001];

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> val[i];
	}
	long long mx = 1;
	for (int i = 1; i <= n; ++i) {
		mx = max(mx, val[i]);
		dp[0][i] = mx;
	}
	mx = 1;
	for (int i = 0; i < n; ++i) {
		mx = max(mx, val[n - i]);
		dp[1][n - i] = mx;
	}
	for (int i = 1; i <= n; ++i) {
		cout << dp[0][i] << ' ' << dp[1][i] << "\n";
	}
}
