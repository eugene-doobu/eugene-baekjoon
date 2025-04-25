#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int n, k, cur = 0, save = 0; cin >> n >> k;
    while (n--) {
        string s; cin >> s;
        if (s == "save") save = cur;
        else if (s == "load") cur = save;
        else if (s == "shoot") { if (cur) cur--; }
        else cur += k;
        cout << cur << "\n";
    }
}