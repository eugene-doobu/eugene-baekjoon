#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    fastio;
    int n, m, M, T, R;
    int total, ex, pulse;
    cin >> n >> m >> M >> T >> R;
    if (m + T > M) {
        cout << -1 << "\n";
        return 0;
    }

    total = 0;
    ex = 0;
    pulse = m;
    while (ex < n) {
        total++;
        if (pulse + T <= M) {
            pulse += T;
            ex++;
        } else {
            pulse -= R;
            if (pulse < m)
                pulse = m;
        }
    }
    cout << total << "\n";
}