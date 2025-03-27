#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int h, l, a, b, c = 0; cin >> h >> l >> a >> b;
    if ((a <= l && b <= h * 2) || (b <= l && a <= h * 2)) c = 1;
    cout << (c ? "YES" : "NO");
}
