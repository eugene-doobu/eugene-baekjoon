#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1001];

int main() {
    fastio;
    int n, mx = -1; cin >> n;
    vector<int> v(n+1); for (int i = 1; i <= n; ++i) cin >> v[i];
    dp[1] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i], 1);
        for (int j = i+1; j <= n; j++) {
            if (v[j] > v[i]) dp[j] = max(dp[j], dp[i] + 1);
        }
        mx = max(mx, dp[i]);
    }
    cout << mx;
}
