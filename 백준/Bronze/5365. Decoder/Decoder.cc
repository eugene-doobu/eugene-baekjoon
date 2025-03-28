#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int n, len = 1; cin >> n;
    while (n--) {
        string w; cin >> w;
        if (w.size() < len) cout << ' ';
        else cout << w[len - 1];
        len = w.size();
    }
}
