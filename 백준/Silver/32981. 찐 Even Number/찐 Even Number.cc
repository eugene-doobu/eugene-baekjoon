#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using ll = long long;
ll dp[10000001];
int main() {
    fastio; int n, x; cin >> n; dp[1] = 5; dp[2] = 20;
    for (int i = 3; i <= 10000000; ++i)
        dp[i] = (dp[i - 1] * 5) % 1000000007;
    while (n--) {
        cin >> x; cout << dp[x] << "\n";
    }
}
