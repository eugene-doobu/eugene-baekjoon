#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1001];
int dp2[1001];

int main() {
    fastio;
    int n, mx = -1, mxIdx = 0; cin >> n;
    vector<int> v(n + 1); for (int i = 1; i <= n; ++i) cin >> v[i];
    dp[1] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i], 1);
        for (int j = i + 1; j <= n; j++) {
            if (v[j] > v[i] && dp[j] < dp[i] + 1) {
                dp[j] = dp[i] + 1;
                dp2[j] = i;
            }
        }
        if (mx < dp[i]) {
            mx = dp[i];
            mxIdx = i;
        }
    }
    cout << mx << "\n";
    stack<int> idxs;
    while (mxIdx != 0) {
        idxs.push(mxIdx);
        mxIdx = dp2[mxIdx];
    }
    while (!idxs.empty()) {
        int idx = idxs.top(); idxs.pop();
        cout << v[idx] << " ";
    }
}
