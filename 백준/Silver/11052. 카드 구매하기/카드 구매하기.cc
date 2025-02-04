#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1001];
int vals[1001];

int main() {
	fastio; int n; cin >> n;
	for (int i = 1; i <= n; ++i) cin >> vals[i];
	for (int i = 1; i <= n; ++i)
	{
		for (int j=1; j<=i; ++j)
		{
			dp[i] = max(dp[i], vals[j] + dp[i - j]);
		}
	}
	cout << dp[n];
}