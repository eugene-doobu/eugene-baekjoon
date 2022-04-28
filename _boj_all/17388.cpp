#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
    fastio;
    vector<int> v(3); cin >> v[0] >> v[1] >> v[2];
    if (v[0] + v[1] + v[2] >= 100) cout << "OK";
    else {
        int mn = min(min(v[0], v[1]), v[2]);
        if (mn == v[0]) cout << "Soongsil";
        else if (mn == v[1]) cout << "Korea";
        else cout << "Hanyang";
    }
}