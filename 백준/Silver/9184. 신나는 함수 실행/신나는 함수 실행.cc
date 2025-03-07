#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[21][21][21];

int solve(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) 
        return 1;
    if (a > 20 || b > 20 || c > 20)
        return solve(20, 20, 20);
    if (dp[a][b][c] != 0x7f7f7f7f) return dp[a][b][c];
    if (a < b && b < c) {
        dp[a][b][c] = solve(a, b, c - 1) + solve(a, b - 1, c - 1) - solve(a, b - 1, c);
        return dp[a][b][c];
    }

    dp[a][b][c] = solve(a - 1, b, c) + solve(a - 1, b - 1, c) + solve(a - 1, b, c - 1) - solve(a - 1, b - 1, c - 1);
    return dp[a][b][c];
}

int main() {
    fastio;
    memset(dp, 0x7f7f7f7f, sizeof(int) * 21 * 21 * 21);
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == -1 && c == -1 && b == -1) break;
        cout << "w(" << a << ", " << b << ", " << c <<") = " << solve(a, b, c) << "\n";
    }
}
