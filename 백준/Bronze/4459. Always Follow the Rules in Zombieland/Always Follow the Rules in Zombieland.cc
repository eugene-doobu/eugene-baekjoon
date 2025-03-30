#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int q, r, l; string texts[51]; cin >> q;
    for (int i = 0; i <= q; ++i) getline(cin, texts[i]);
    cin >> r;
    while (r--) {
        cin >> l;
        if (l < 1 || l>q) cout << "Rule " << l << ": " << "No such rule\n";
        else cout << "Rule " << l << ": " << texts[l] << '\n';
    }
}
