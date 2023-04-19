#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int val[502][502];
long long dp[502][502];
int main() {
	fastio;
	int h, w; cin >> h >> w;
	long long mx = -1;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; ++j) {
			cin >> val[i][j];
		}
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; ++j) {
			dp[i][j] = val[i][j] + max(max(dp[i - 1][j - 1], dp[i - 1][j + 1]), dp[i - 1][j]);
			mx = max(mx, dp[i][j]);
		}
	}
	cout << mx;
}
