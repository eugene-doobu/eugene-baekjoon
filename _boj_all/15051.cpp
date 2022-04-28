#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

int main() {
    fastio;
    int a, b, c; cin >> a >> b >> c;
    cout << min(b * 2 + c * 4, min(a * 2 + c * 2, a * 4 + b * 2));
}
