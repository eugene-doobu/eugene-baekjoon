#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio;
    string s; int rst = 0; cin >> s;
    for (int i=0; i<s.length()-3; ++i)if (s[i] == 'D' && s[i + 1] == 'K' && s[i + 2] == 'S' && s[i + 3] == 'H') rst++;
    cout << rst;
}