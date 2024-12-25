#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int t = 5; vector<int> v; int s = 0;
    while (t--)
    {
        int val; cin >> val;
        v.push_back(val);
        s += val;
    } sort(v.begin(), v.end());
    cout << s / 5 << "\n" << v[2];
}