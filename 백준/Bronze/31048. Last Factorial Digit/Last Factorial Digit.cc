#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int t, n, ans; cin >> t;
    while (t--) {
        cin >> n; ans = 1;
        for (int i = 1; i <= n; i++)
            ans = (ans * i) % 10;
        cout << ans << "\n";
    }
}