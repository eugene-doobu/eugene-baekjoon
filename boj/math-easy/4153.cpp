#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    vector<int> v(3);
    while(1) {
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if (!(v[0] || v[1] || v[2])) break;
        if (v[2] * v[2] == v[0] * v[0] + v[1] * v[1]) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }
    return 0;
}