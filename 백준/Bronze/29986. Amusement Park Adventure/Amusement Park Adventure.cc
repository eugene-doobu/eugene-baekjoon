#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; // 29986
    int n, h, ans = 0; cin >> n >> h; vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) ans += (h >= a[i]);
    cout << ans;
}