#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;

int main() {
    fastio;
    int a, b, k, x, rst = 0; cin >> a >> b >> k >> x;
    for (int i = k - x; i <= k + x; ++i)
        if (a <= i && i <= b) rst++;
    if (rst == 0) cout << "IMPOSSIBLE";
    else cout << rst;
}