#include<bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int dp[1001];
int solve(int x) {
	int& ref = dp[x];
	if (ref != -1) return ref;
	if (x == 0) return ref = 0;
	if (x == 1) return ref = 1;
	if (x == 2) return ref = 0;
	if (x >= 1) if (solve(x - 1) == 0) return ref = 1;
	if (x >= 3) if (solve(x - 3) == 0) return ref = 1;
	else return ref = 0;
}

int main()
{
	fastio;
	int n; cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << (solve(n) ? "CY" : "SK");
}