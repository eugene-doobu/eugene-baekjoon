#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long dp[31][31];

int main() {
	fastio;
	for (int j = 1; j <= 30; ++j) {
		dp[1][j] = j;
	}
	for (int i = 2; i <= 30; ++i) {
		for (int j = i; j <= 30; ++j) {
			for (int k = i-1; k <= j-1; ++k) dp[i][j] += dp[i - 1][k];
		}

	}
	int n; cin >> n;
	while (n--) {
		int x, y; cin >> x >> y;
		cout << dp[x][y] << "\n";
	}
}
