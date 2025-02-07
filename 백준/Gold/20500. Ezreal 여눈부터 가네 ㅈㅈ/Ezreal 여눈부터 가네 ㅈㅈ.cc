#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

long dp[1516];
int main() {
	fastio; int n; cin >> n; dp[2] = 1;
	for (int i = 3; i <= n; ++i) {
		dp[i] = ((dp[i - 2] * 2) % 1000000007 + (dp[i - 1]) % 1000000007) % 1000000007;
	}
	cout << dp[n];
}