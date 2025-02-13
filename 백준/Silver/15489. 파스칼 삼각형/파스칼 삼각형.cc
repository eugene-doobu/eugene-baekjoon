#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[31][31];

int main() {
	int r, c, w, h, s = 0; cin >> r >> c >> w;
	h = r + w -1;
	for (int i = 1; i <= h; ++i) {
		dp[i][i] = 1; dp[i][1] = 1;
	}
	for (int i = 2; i <= h; ++i)
		for (int j = 2; j <= i -1; ++j)
			dp[i][j] = dp[i-1][j - 1] + dp[i-1][j];
	for (int i = r; i <= h; ++i)
		for (int j = 0; j <= i - r; ++j)
			s += dp[i][j + c];
	cout << s;
}