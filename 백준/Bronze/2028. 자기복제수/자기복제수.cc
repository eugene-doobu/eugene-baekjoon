#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int t, n; cin >> t;
    while (t--) {
        cin >> n; string a, b;
        a = to_string(n);
        b = to_string(n * n);
        int aLen = a.length();
        int bLen = b.length();
        for (int i = 0; i < aLen; ++i) {
            if (a[aLen - i - 1] != b[bLen - i - 1]) {
                cout << "NO\n";
                break;
            }
            if (i == aLen - 1) cout << "YES\n";
        }
    }
}
