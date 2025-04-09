#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int n, m = 24288; cin >> n; m += n * 7;
    cout << (m / 12) << ' ' << (m % 12 + 1);
}
