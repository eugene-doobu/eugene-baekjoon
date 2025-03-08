#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int m[305][305];

int main() {
    fastio; int x, y; cin >> y >> x;
    for (int i = 1; i <= x; ++i)
        for (int j = 1; j <= y; ++j)
            cin >> m[i][j];
    for (int i = 1; i <= x; ++i)
        for (int j = 1; j <= y; ++j) {
            if (i == 1 && j == 1)
                continue;
            if (m[i - 1][j] == 0 && m[i][j - 1] == 0)
                m[i][j] = 0;
        }
    cout << (m[x][y] ? "Yes" : "No");
}
