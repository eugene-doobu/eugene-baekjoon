#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio;int t;cin >> t; cin.ignore();
    while (t--)
    {
        string s; getline(cin, s);int g, b; g = b = 0;
        for (auto c : s)
        {
            if (c == 'G' || c == 'g') g++;
            else if (c == 'B' || c == 'b') b++;
        }
        cout << s << " is " << (g == b ? "NEUTRAL" : (g > b ? "GOOD" : "A BADDY")) << "\n";
    } return 0;
}