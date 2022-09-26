#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

long dp[10001];

int main()
{
    fastio;
    int n; cin >> n; n /= 2;
    dp[0] = 1; dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            dp[i] += dp[j] * dp[i - 1 - j];
            dp[i] %= 987654321;
        }
    }
    cout << dp[n];
}
