#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int q, w;
int main() {
    fastio;
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    q += a * 3 + b * 2 + c;
    w += d * 3 + e * 2 + f;
    if (q == w) cout << "T";
    else if (q > w) cout << "A";
    else cout << "B";
}