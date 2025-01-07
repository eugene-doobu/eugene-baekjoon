#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int p, c; cin >> p >> c;
    cout << p * 50 - c * 10 + (p > c ? 500 : 0);
}