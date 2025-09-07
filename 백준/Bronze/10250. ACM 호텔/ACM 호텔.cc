#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;

int main() {
    fastio; int t, h, w, n; cin >> t;
    while (t--)
    {
        cin >> h >> w >> n;
        int f = (n - 1) % h + 1;
        int rn = (n - 1) / h + 1;
        cout << f * 100 + rn << "\n";
    }
}