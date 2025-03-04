#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[100001][6];
int main() {
    fastio; int n, s, e, m = 0x8f8f8f8f, mi, x, y; cin >> n;
    for (int j = 1; j <= n; ++j) {
        cin >> x >> y;
        if (x > y) { s = y; e = x; }
        else { s = x; e = y; }

        dp[j][s] = dp[j - 1][s] + 1;
        if (dp[j][s] > m) {
            m = dp[j][s]; mi = s;
        }
        if (s != e) {
            dp[j][e] = dp[j - 1][e] + 1;
            if (dp[j][e] > m) {
                m = dp[j][e]; mi = e;
            }
        }
    }

    cout << m << ' ' << mi;
}
