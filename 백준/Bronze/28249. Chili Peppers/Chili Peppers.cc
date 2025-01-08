#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int t, r=0; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s == "Poblano")r += 1500;
        if (s == "Mirasol")r += 6000;
        if (s == "Serrano")r += 15500;
        if (s == "Cayenne")r += 40000;
        if (s == "Thai")r += 75000;
        if (s == "Habanero")r += 125000;
    }
    cout << r;
}