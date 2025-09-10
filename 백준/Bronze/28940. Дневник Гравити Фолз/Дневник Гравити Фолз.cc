#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    fastio;
    long long w, h, n, a, b;
    cin >> w >> h >> n >> a >> b;

    if (a > w || b > h) {
        cout << -1 << "\n";
        return 0;
    }

    long long lpr = w / a;
    long long rpp = h / b;
    long long lpp = lpr * rpp;
    long long rst = (n + lpp - 1) / lpp;

    cout << rst << "\n";
}