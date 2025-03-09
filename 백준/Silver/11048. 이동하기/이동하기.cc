#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int m[1001][1001];
int dp[1001][1001];

int main() {
    fastio; int x, y; cin >> x >> y;
    for (int i = 1; i <= x; ++i)
        for (int j = 1; j <= y; ++j)
            cin >> m[i][j];
    for (int i = 1; i <= x; ++i)
        for (int j = 1; j <= y; ++j) {
            int value1 = dp[i - 1][j];
            int value2 = dp[i][j - 1];
            int value3 = dp[i - 1][j - 1];
            int currValue = max(value1, max(value2, value3));
            dp[i][j] = m[i][j] + currValue;
        }
    cout << (dp[x][y]);
}
