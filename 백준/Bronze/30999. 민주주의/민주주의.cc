#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
using namespace std;
int main() {
    fastio;
    int n, m, ans; string s;
    cin >> n >> m; ans = 0;
    while (n--) {
        cin >> s;
        int cnt = 0;
        for (char c : s)
            if (c == 'O')
                cnt++;
        if (cnt > m / 2)
            ans++;
    }
    cout << ans << "\n";
}