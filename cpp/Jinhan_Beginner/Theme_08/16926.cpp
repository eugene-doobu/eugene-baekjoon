#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m, r, arr[300][300], minD2;

void rotate() {
	for (int i = 0; i < minD2; ++i) {
		int tmp = arr[i][i];
		int xMove = m - 1 - (i * 2), yMove = n - 1 - (i * 2);
		int sum = xMove + xMove + yMove + yMove;
		xMove %= sum; yMove %= sum;
		for (int j = 0; j < xMove; ++j) arr[i][j + i] = arr[i][j + 1 + i];
		for (int j = 0; j < yMove; ++j) arr[j + i][m-1-i] = arr[j+1 + i][m - 1 - i];
		for (int j = 0; j < xMove; ++j) arr[n-1-i][m-1-i - j] = arr[n-1-i][m - 2 - i - j];
		for (int j = 0; j < yMove; ++j) arr[n-1-j-i][i] = arr[n - 2 - j - i][i];
		arr[i + 1][i] = tmp;
	}
}

int main() {
	fastio;
	cin >> n >> m >> r;
	minD2 = min(n, m) == n ? n / 2 : m / 2;
	for (int x = 0; x < n; ++x) {
		for (int y = 0; y < m; ++y) {
			cin >> arr[x][y];
		}
	}
	while (r--) rotate();
	for (int x = 0; x < n; ++x) {
		for (int y = 0; y < m; ++y) {
			cout << arr[x][y] << ' ';
		}
		cout << '\n';
	}
}