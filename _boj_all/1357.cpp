#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int Rev(int a) {
    string s = "", tmp = to_string(a);
    for (int i = tmp.size() - 1; i >= 0; --i) s += tmp[i];
    return stoi(s);
}

int main() {
    fastio;
    int x, y; cin >> x >> y;
    cout << Rev(Rev(x) + Rev(y));
}