#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int n, rst;
bool li[1000];
int main() {
    fastio; cin >> n;
    for (int i = 0; i < n; ++i) cin >> li[i];
    for (int i = 0; i < n; ++i) {
        int l, r; cin >> l >> r;
        if (li[i]) rst += max(r - l, 0);
    }
    cout << rst;
}
