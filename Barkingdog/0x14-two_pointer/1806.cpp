#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n, m; cin >> n >> m;
    vector<int> v(n); for (int i = 0; i < n; ++i) cin >> v[i];

    int st = 0, en = 0, _min = 2e9 + 1, _sum = v[0];
    for (; st < n; st++) {
        while (en < n && _sum < m) {
            en++;
            if (en != n) _sum += v[en];
        }
        if (en == n) break;
        _min = min(_min, en - st + 1);
        _sum -= v[st];
    }
    cout << ((_min == (2e9 + 1)) ? 0 : _min);
    return 0;
}