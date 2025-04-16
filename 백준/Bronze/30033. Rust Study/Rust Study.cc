#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int vals[1001];
int dp[1001];

int main() {
    fastio; int n, r = 0; cin >> n;
    for (int i = 0; i < n; ++i) cin >> vals[i];
    for (int i = 0; i < n; ++i) cin >> dp[i];
    for (int i = 0; i < n; ++i) if (vals[i] <= dp[i]) r++;
    cout << r;
}
