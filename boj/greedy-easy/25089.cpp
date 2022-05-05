#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

int main() {
    fastio;
    int n; cin >> n;
    for (int j =1; j <= n; ++j) {
        int c1, m1, y1, k1; cin >> c1 >> m1 >> y1 >> k1;
        int c2, m2, y2, k2; cin >> c2 >> m2 >> y2 >> k2;
        int c3, m3, y3, k3; cin >> c3 >> m3 >> y3 >> k3;
        int minc = min(c1, min(c2, c3));
        int minm = min(m1, min(m2, m3));
        int miny = min(y1, min(y2, y3));
        int mink = min(k1, min(k2, k3));
        cout << "Case #" << j << ": ";
        if (minc + minm + miny + mink < 1000000) cout << "IMPOSSIBLE\n";
        else {
            int allC = minc + minm + miny + mink;
            int tmpC = (allC % 1000000) + ((allC / 1000000)-1) * 1000000;
            if (tmpC > 0) {
                tmpC -= minc;
                minc = max(0, minc - (tmpC + minc));
                tmpC = max(0, tmpC);
            }
            if (tmpC > 0) {
                tmpC -= minm;
                minm = max(0, minm - (tmpC + minm));
                tmpC = max(0, tmpC);
            }
            if (tmpC > 0) {
                tmpC -= miny;
                miny = max(0, miny - (tmpC + miny));
                tmpC = max(0, tmpC);
            }
            if (tmpC > 0) {
                tmpC -= mink;
                mink = max(0, mink - (tmpC + mink));
                tmpC = max(0, tmpC);
            }
            cout << minc << " " << minm << " " << miny << " " << mink << "\n";
        }
    }
}
