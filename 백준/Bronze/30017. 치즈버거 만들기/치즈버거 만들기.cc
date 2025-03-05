#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int a, b; cin >> a >> b;
    b = min(b, a - 1); a = min(a, b + 1); cout << a + b;
}
