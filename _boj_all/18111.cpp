#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int INF = int(2e9);

int board[500][500];

int main() {
	fastio;
	int mn = INF;
	int n, m, b; cin >> n >> m >> b;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
		cin >> board[i][j];
		mn = min(mn, board[i][j]);
	}

	int sum = 0;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) sum += board[i][j] - mn;
	int possble_len = (b + sum) / (n * m);

	int ans = INF, h = mn;
	for (int height = mn; height <= mn + possble_len; height++) {
		int time = 0;
		for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
			if (board[i][j] > height) {
				time += 2 * (board[i][j] - height);
			}
			else if (board[i][j] < height) {
				time += height - board[i][j];
			}
		}
		if (time <= ans) {
			ans = time;
			h = height;
		}
	}
	cout << ans << ' ' << h << '\n';
}