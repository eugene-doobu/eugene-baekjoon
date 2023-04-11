#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[11];

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 1; i <= 10; ++i) {
		dp[i] = dp[i - 1] + i - 1;
	}
	cout << dp[n];
}
