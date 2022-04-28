#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    string x; cin >> x;
    int rst = 1;
    for (int i = 0; i < x.size() - 1; ++i)
        if (x[i] == ',') rst++;
    cout << rst;
}