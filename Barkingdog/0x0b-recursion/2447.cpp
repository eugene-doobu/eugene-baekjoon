#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

char board[2200][2200] = {' ',};

void hanoi(int n, int x, int y) {
	if (n == 3) {
		board[x + 0][y + 0] = '*';
		board[x + 0][y + 1] = '*';
		board[x + 0][y + 2] = '*';
		board[x + 1][y + 0] = '*';
		board[x + 1][y + 1] = ' ';
		board[x + 1][y + 2] = '*';
		board[x + 2][y + 0] = '*';
		board[x + 2][y + 1] = '*';
		board[x + 2][y + 2] = '*';
		return;
	}
	int nDiv3 = n / 3;
	hanoi(nDiv3, x, y);
	hanoi(nDiv3, x, y + nDiv3);
	hanoi(nDiv3, x, y + nDiv3*2);
	hanoi(nDiv3, x + nDiv3, y);
	hanoi(nDiv3, x + nDiv3, y + nDiv3 * 2);
	hanoi(nDiv3, x + nDiv3 * 2, y);
	hanoi(nDiv3, x + nDiv3 * 2, y + nDiv3);
	hanoi(nDiv3, x + nDiv3 * 2, y + nDiv3 * 2);
}

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			board[i][j] = ' ';
		}
	}
	hanoi(n, 0, 0);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << board[i][j];
		}
		cout << "\n";
	}
}