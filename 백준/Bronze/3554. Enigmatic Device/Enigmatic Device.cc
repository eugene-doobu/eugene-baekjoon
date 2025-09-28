#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    fastio;
    int n, m, k, l, r, i; long long sum; vector<int> v;
    cin >> n;
    v.resize(n + 1);
    for (i = 1; i <= n; i++)
        cin >> v[i];
    cin >> m;
    while (m--) {
        cin >> k >> l >> r;
        if (k == 1) {
            for (i = l; i <= r; i++)
                v[i] = (v[i] * v[i]) % 2010;
        } else {
            sum = 0;
            for (i = l; i <= r; i++)
                sum += v[i];
            cout << sum << "\n";
        }
    }
}