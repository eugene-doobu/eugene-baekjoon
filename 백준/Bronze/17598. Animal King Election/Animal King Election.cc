#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int l = 0, t = 0, z = 9;
    while (z--) {
        string c; cin >> c;
        if (c[0] == 'L') l++;
        else t++;
    }
    cout << ((l >= 5) ? "Lion" : "Tiger");
}