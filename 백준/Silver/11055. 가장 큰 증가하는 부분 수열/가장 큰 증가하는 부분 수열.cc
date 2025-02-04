#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1001];
int vals[1001];

int main() {
	fastio; int n, mx=1; cin >> n;
	for (int i = 1; i <= n; ++i) cin >> vals[i];
	for (int i = 1; i <= n; ++i)
	{
		dp[i] = max(dp[i], vals[i]);
		mx = max(mx, dp[i]);
		for (int j = i + 1; j <= n; ++j)
		{
			if (vals[i] < vals[j])
			{
				dp[j] = max(dp[j], vals[j] + dp[i]);
				mx = max(mx, dp[j]);
			}
		}
	}
	cout << mx;
}