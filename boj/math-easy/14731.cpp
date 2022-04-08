#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define ll long long
const ll m = 1e9+7;

ll fastPow(ll y) {
    ll tmp = 1, x = 2;
    while (y) {
        if (y & 1) tmp = tmp * x % m;
        y = y >> 1;
        x = x * x % m;
    }
    return tmp % m;
}

int main() {
    fastio;
    int n; cin >> n; ll rst = 0;
    for (int i = 0; i < n; ++i) {
        ll a, b; cin >> a >> b;
        if (b == 0) continue;
        rst += (((a * b) % m) * fastPow(b-1)) % m;
    }
    cout << rst % m << "\n";
    return 0;
}