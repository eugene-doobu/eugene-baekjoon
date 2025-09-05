#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
using namespace std;

int main() {
    fastio;
    int t, n, s=0, f; cin >> t >> n;
    for (int i = 0; i < n; ++i) { cin >> f; s +=f; }
    if (s >= t)cout << "Padaeng_i Happy";
    else cout << "Padaeng_i Cry";
}