#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n = 7, sum=0, mn = 0x09090909;
    while (n--) {
        int m; cin >> m;
        if (m % 2) {
            sum += m;
            mn = min(mn, m);
        }
    }
    if(mn == 0x09090909)cout << -1;
    else cout << sum << "\n" << mn;
}