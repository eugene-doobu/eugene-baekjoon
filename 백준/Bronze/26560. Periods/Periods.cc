#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int t; cin >> t; cin.ignore();
    while (t--)
    {
        string s; getline(cin, s);
        cout << ((s[s.length() - 1] == '.') ? s : s + ".") << "\n";
    }
}