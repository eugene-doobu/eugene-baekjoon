#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    fastio;
    vector<long long> v(3); int i;
    for (i = 0; i < 3; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[1] << "\n";
}