#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int n, m, l, r; cin >> n; vector<string> vs(n);
    for (int i = 0; i < n; ++i) cin >> vs[i]; cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        for (int j = l - 1; j < r; j++)
            cout << vs[j] << "\n";
    }
}
