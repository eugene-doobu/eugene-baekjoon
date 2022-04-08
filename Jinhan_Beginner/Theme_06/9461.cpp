#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

long long dp[100];

void initDP() {
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < 3; ++i) dp[i] = 1;
}

int main() {
	fastio;
	int n; cin >> n; vector<int> v(n); for (int i = 0; i < n; ++i) cin >> v[i];
	for (auto& i : v) {
		initDP();
		for (int j = 2; j < i; ++j) {
			dp[j] = dp[j - 2] + dp[j - 3];
		}
		cout << dp[i - 1] << "\n";
	}
}