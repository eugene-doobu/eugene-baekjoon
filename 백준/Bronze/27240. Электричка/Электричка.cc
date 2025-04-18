#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; long n, a, b, s, t; cin >> n >> a >> b >> s >> t;
    if (((a < s) && (s < b))&& ((a < t) && (t < b))) cout << "City";
    else if ((s <= a) && (t <= a) || (s >= b) && (t >= b)) cout << "Outside";
    else cout << "Full";
}