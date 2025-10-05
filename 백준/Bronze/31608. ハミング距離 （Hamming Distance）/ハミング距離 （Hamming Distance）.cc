#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <string>
using namespace std;
int main() {
    fastio;
    int n, cnt, i; string s, t;
    cin >> n >> s >> t;
    cnt = 0;
    for (i = 0; i < n; i++)
        if (s[i] != t[i])
            cnt++;
    cout << cnt << "\n";
}