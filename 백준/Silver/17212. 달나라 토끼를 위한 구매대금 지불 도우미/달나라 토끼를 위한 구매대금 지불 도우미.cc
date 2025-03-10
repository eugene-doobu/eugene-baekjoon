#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int dp[100001];
int main() {
    fastio; int n; cin >> n;
    memset(dp + 1, 0x3f3f3f3f, sizeof(int) * n);
    for (int i = 1; i <= n; ++i) {
        dp[i] = min(dp[i], dp[i - 1] + 1);
        if (i >= 2) dp[i] = min(dp[i], dp[i - 2] + 1);
        if (i >= 5) dp[i] = min(dp[i], dp[i - 5] + 1);
        if (i >= 7) dp[i] = min(dp[i], dp[i - 7] + 1);
    }
    cout << dp[n];
}
