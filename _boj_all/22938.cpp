#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
    fastio;
    long long a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    d -= a; e -= b; a = 0; b = 0;
    if (sqrt(d * d + e * e) >= c + f ) cout << "NO";
    else cout << "YES";
}