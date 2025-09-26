#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int t, n, a, d, ans, i; cin >> t;
    while (t--) {
        cin >> n >> a >> d;
        ans = 0;
        for (i = 0; i < n; i++)
            ans += a + i * d;
        cout << ans << "\n";
    }
}