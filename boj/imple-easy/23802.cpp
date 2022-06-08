#include<bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define pii pair<int, int>

int main(void) {
    fastio;
    int n; cin >> n;
    for (int i = 1; i <= 5 * n; ++i) {
        for (int j = 1; j <= 5 * n; ++j) {
            if (i <= n || j <= n) cout << "@";
        }
        cout << "\n";
    }
}
