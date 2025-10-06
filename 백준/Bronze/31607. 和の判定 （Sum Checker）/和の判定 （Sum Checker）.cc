#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    fastio;
    vector<int> v(3); int i;
    for (i = 0; i < 3; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (v[2] == v[0] + v[1]) cout << 1 << "\n";
    else cout << 0 << "\n";
}