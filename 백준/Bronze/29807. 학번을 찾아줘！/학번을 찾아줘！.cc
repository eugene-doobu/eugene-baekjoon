#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int t, r; int a[5];
int main() {
    fastio; cin >> t; for (int i = 0; i < t; ++i) cin >> a[i];
    if (a[0] > a[2]) r += (a[0] - a[2]) * 508;
    else r += (a[2] - a[0]) * 108;
    if (a[1] > a[3]) r += (a[1] - a[3]) * 212;
    else r += (a[3] - a[1]) * 305;
    if (a[4] > 0) r += a[4] * 707; cout << r * 4763;
}
