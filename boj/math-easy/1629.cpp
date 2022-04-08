#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define ull unsigned long long

ull fastPow(ull x, ull y, ull m) {
    ull tmp = 1;
    while (y) {
        if (y & 1) tmp = tmp * x % m;
        y = y >> 1;
        x = x * x % m;
    }
    return tmp % m;
}

int main() {
    fastio;
    ull a, b, m; cin >> a >> b >> m;
    cout << fastPow(a, b, m);
    return 0;
}