#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1001][1001];
int vals[1001][1001];

int main() {
	fastio; string x, y; cin >> x >> y; int n = x.size(), m = y.size();
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (x[i - 1] == y[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
				vals[i][j] = 0;
			}
			else if(dp[i-1][j] >= dp[i][j-1])
			{
				dp[i][j] = dp[i - 1][j];
				vals[i][j] = 1;
			}
			else {
				dp[i][j] = dp[i][j - 1];
				vals[i][j] = 2;
			}
		}
	}
	int rst = dp[n][m], r = n, c = m;
	stack<char> s;
	while (s.size() < rst) {
		if (vals[r][c] == 0) {
			s.push(x[r - 1]); 
			r--;
			c--;
		}
		else if (vals[r][c] == 1 && r > 0) r--;
		else if (c > 0) c--;
	}
	cout << rst;
	if (!s.empty()) cout << "\n";
	while (!s.empty()) {
		cout << s.top(); s.pop();
	}
}