#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; long n, c=0,r; cin >> n;
    while (n--) {
        cin >> r; if (r % 2 == 1)c++;
    } cout << c;
}