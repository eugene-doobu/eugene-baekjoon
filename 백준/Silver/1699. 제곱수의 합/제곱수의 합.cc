#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[100001];
int main() {
    fastio; int n; cin >> n;
    memset(dp, 0x3f3f3f3f, sizeof(int) * (n + 1));
    for (int i = 1; i <= n; ++i) {
        int sVal = i * i;
        if (sVal > n) break;
        dp[sVal] = 1;
        for (int j = sVal + 1; j <= n; j++) {
            dp[j] = min(dp[j], dp[j - sVal] + 1);
        }
    }
    cout << dp[n];
}
