#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

int main() {
    fastio;
    vector<int> v(3); cin >> v[0] >> v[1] >> v[2];
    if ((v[0] == 2 && v[1] == 2) || (v[0] == 2 && v[2] == 2) || (v[2] == 2 && v[1] == 2)) cout << "2";
    else cout << "1";
}
