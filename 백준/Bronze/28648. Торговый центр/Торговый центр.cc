#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int r = 0x38383838, n; cin >> n;
    while (n--) {
        int a, b; cin >> a >> b;
        if (r > a + b) r = a + b;
    }
    cout << r;
}
