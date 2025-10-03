#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int n, m, k, ans;
    cin >> n >> m >> k;
    ans = (n + (k - m) - 1) / (k - m);
    cout << ans << "\n";
}