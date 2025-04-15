#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int vals[1001];
int dp[1001];

int main() {
    fastio; int n, mx = 1; cin >> n;
    for (int i = 0; i < n; ++i) 
    {
        cin >> vals[i]; dp[i] = 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (vals[i] >= vals[j]) 
                continue;
            dp[j] = max(dp[j], dp[i] + 1);
            mx = max(mx, dp[j]);
        }
    }
    cout << mx;
}
