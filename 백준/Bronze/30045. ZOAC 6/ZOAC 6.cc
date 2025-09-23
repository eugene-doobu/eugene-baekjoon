#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
using namespace std;
int main() {
    fastio;
    int n, ans; string s; cin >> n; ans = 0;
    while (n--) {
        cin >> s;
        if (s.find("01") != string::npos || s.find("OI") != string::npos)
            ans++;
    }
    cout << ans << "\n";
}