#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int board[16][16];
int dp[16][16];

int callRecurr;

int MatRecurr(int m[16][16], int i, int j) {
	if (i == 0 || j == 0) {
		callRecurr++;
		return 0;
	}
	return (board[i][j] + max(MatRecurr(m, i-1, j), MatRecurr(m, i, j-1)));
}

int Mat(int m[16][16], int n) {
	return MatRecurr(m, n, n);
}

int main() {
	fastio; int n; cin >> n;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> board[i][j];
	Mat(board, n);
	cout << callRecurr << ' ' << n * n;
}