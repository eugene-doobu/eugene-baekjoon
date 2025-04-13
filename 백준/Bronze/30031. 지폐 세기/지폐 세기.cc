#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int n, a, b, t = 0; cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a == 136) t += 1000;
        else if (a == 142) t += 5000;
        else if (a == 148) t += 10000;
        else  t += 50000;
    }
    cout << t;
}
