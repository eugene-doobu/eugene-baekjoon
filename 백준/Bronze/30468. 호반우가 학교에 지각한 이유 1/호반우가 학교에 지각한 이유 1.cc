#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int s, d, i, l, n; cin >> s >> d >> i >> l >> n;
    s += d; s += i; s += l; cout << max(0, (n * 4) - s);
}