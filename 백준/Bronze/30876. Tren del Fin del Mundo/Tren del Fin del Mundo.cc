#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;
int main() {
    fastio;
    int n, x, y, mx, my;
    cin >> n;my = 1001;
    while (n--) {
        cin >> x >> y;
        if (y < my) {
            my = y;
            mx = x;
        }
    }
    cout << mx << " " << my << "\n";
}