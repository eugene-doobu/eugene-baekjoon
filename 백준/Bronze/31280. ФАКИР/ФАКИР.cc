#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    fastio;
    int a, b, c, d, ans; cin >> a >> b >> c >> d;
    ans = a + b + c + d - min({a, b, c, d}) + 1;
    cout << ans << "\n";
}