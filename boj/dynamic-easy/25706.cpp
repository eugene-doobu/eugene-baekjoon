#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int dp[200002];
int up[200002];

int main() {
	fastio;
	int val = 1;
	long n; cin >> n;
	fill(dp, dp + n + 1, 1);
	for (int i = 1; i <= n; ++i) {
		cin >> up[i];
	}
	for (int i = n; i > 0; --i) {
		int index = up[i] + 1 + i;
		if (index > n) continue;
		dp[i] = dp[index] + 1;
	}
	for (int i = 1; i <= n; ++i) {
		cout << dp[i] << ' ';
	}
}
