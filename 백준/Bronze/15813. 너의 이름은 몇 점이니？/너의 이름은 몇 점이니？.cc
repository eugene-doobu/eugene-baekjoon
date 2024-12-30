#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int z; cin >> z; string  s; cin >> s; int rst = 0;
    for (char c : s) rst += c - 'A' + 1;
    cout << rst;
}