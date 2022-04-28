#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n, m, nm, cnt = 0; string s; cin >> n >> m >> s;
    string base = "IOI";
    for (int i = 1; i < n; ++i) base += "OI";
    nm = base.size();
    for (int i = 0; i < m; ++i) {
        if (s[i] == 'I') {
            bool isOk = true;
            for (int j = 1; j < nm; ++j) {
                if (base[j] != s[i + j]) {
                    isOk = false;
                    break;
                }
            }
            if (isOk) cnt++;
        }
    }
    cout << cnt;
}