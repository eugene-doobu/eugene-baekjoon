#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[70];
int main() {
	fastio;
	dp[0] = 1; dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for (int i = 4; i <= 70; ++i) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
	int n; cin >> n;
	while (n--) {
		int i; cin >> i;
		cout << dp[i] << "\n";
	}
}
