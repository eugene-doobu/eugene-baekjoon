#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
const int maxValue = 0x7f7f7f7f;
int value[100001], dp[100001];
int Solve(int idx)
{
	if (idx == 0) return value[0];
	int& currValue = dp[idx];
	if (currValue != maxValue) return dp[idx];
	return currValue = max(Solve(idx - 1), 0) + value[idx];
}
int main() {
	fastio; int n, mx = -maxValue; cin >> n;
	memset(dp, maxValue, sizeof(int) * 100001);
	for (int i=0; i<n; ++i) cin >> value[i];
	for (int i = 0; i < n; ++i) mx = max(mx,Solve(i));
	cout << mx;
}