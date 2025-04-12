#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int m, h, n,c, b, t=0; cin >> m >> h >> n;
    while (n--) {
        cin >> c >> b; t += max(m * c, h * b);
    } cout << t;
}