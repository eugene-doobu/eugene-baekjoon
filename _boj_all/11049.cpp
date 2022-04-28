#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
const int INF = 0x7f7f7f7f;
int mat[501][2], c[501][501];

int main() {
    fastio;
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) {
        int r, c; cin >> r >> c;
        mat[i][0] = r; mat[i][1] = c;
    }
    for (int s = 1; s < n; ++s) {
        for (int i = 1; i <= n - s; ++i) {
            int j = i + s;
            c[i][j] = INF;
            for (int k = i; k < j; ++k) {
                c[i][j] = min(c[i][j], c[i][k] + c[k + 1][j] + mat[i][0] * mat[k][1] * mat[j][1]);
            }
        }
    }
    cout << c[1][n];
}