#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1001][1001];

int main() {
    fastio;
    int n, k; cin >> n >> k;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
                continue;
            };
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            dp[i][j] %= 10007;
        }
    }
    cout << dp[n][k];
}
