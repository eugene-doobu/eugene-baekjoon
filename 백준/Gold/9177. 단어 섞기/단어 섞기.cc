#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
bool dp[201][201];

bool Solve(string a, string b, string c) {
	int aLen = a.length(), bLen = b.length(), cLen = c.length();
	if (cLen != aLen + bLen) return false;
	memset(dp, false, sizeof(bool) * 201 * 201);
	dp[0][0] = true;
	for (int i = 1; i <= aLen; ++i) {
		if (a[i - 1] != c[i - 1]) dp[i][0] = false;
		else dp[i][0] = dp[i - 1][0];
	}
	for (int i = 1; i <= aLen; ++i) {
		if (b[i - 1] != c[i - 1]) dp[0][i] = false;
		else dp[0][i] = dp[0][i - 1];
	}
	for (int i = 1; i <= aLen; ++i) {
		for (int j = 1; j <= bLen; ++j) {
			char currA = a[i - 1]; char currB = b[j - 1]; char currC = c[i + j - 1];
			if (currA == currC && currB == currC) dp[i][j] = (dp[i - 1][j] || dp[i][j-1]);
			else if (currA == currC) dp[i][j] = dp[i - 1][j];
			else if (currB == currC) dp[i][j] = dp[i][j - 1];
			else dp[i][j] = false;
		}
	}
	return dp[aLen][bLen];
}

int main() {
	int n; cin >> n; for(int i=1; i<=n; ++i) {
		string a, b, c; cin >> a >> b >> c;
		cout << "Data set " << i << ": " << (Solve(a, b, c) ? "yes" : "no") << "\n";
	}
}