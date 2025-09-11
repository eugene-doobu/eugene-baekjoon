#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int m, a, b, ans; cin >> m >> a >> b;
    if (b >= a) ans = b - a;
    else ans = m - a + b;
    cout << ans << "\n";
}