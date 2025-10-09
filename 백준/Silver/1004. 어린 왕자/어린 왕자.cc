#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;

int main() {
    fastio;
    int t, n, ans;
    int x1, y1, x2, y2, cx, cy, r;
    bool in1, in2;
    cin >> t;
    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        ans = 0;
        while (n--) {
            cin >> cx >> cy >> r;
            long long d1 = (long long)(x1 - cx) * (x1 - cx) + (long long)(y1 - cy) * (y1 - cy);
            long long d2 = (long long)(x2 - cx) * (x2 - cx) + (long long)(y2 - cy) * (y2 - cy);
            long long r_sq = (long long)r * r;
            in1 = (d1 < r_sq);
            in2 = (d2 < r_sq);
            if (in1 != in2)
                ans++;
        }
        cout << ans << "\n";
    }
}