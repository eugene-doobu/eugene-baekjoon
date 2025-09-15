#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    fastio;
    int t, ca, cb, ans;
    string s; cin >> t;
    while (t--) {
        cin >> s;
        ca = 0; cb = 0;
        for (char c : s)
            if (c == 'a')
                ca++;
            else
                cb++;
        ans = min(ca, cb);
        cout << ans << "\n";
    }
}