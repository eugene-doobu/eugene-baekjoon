#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n, m; cin >> n >> m;
    vector<int> v(n); for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    int st = 0, en = 0, _min = 2e9+1;
    while (st < n-1) {
        if (en < n - 1 && _min != min(_min, v[en] - v[st])) ++en;
        else ++st;;
        if (v[en] - v[st] >= m) {
            _min = min(_min, v[en] - v[st]);
        }
    }
    cout << _min;
    return 0;
}