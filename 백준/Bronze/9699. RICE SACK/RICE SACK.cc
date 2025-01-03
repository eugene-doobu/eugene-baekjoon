#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int t; cin >> t;
    for (int i=1; i<=t; ++i)
    {
        vector<int> z;
        for (int i = 0; i < 5; ++i) { int v; cin >> v; z.push_back(v); }
        sort(z.begin(), z.end());
        cout << "Case #" << i << ": " << z[4] << "\n";
    }
}