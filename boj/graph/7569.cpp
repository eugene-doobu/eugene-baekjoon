#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

int board[102][102][101];
bool visited[102][102][102];

int dx[6] = { 1,0,-1,0, 0, 0 };
int dy[6] = { 0, 1, 0, -1, 0, 0 };
int dh[6] = { 0, 0, 0, 0, 1, -1 };

int main() {
	fastio; 
	int numOfTomato = 0;
	int m, n, h; cin >> m >> n >> h;
	for (int k = 0; k < h; ++k) {
		for (int j = 0; j < n; ++j) {
			for (int i = 0; i < m; ++i) {
				cin >> board[i][j][k];
				if (board[i][j][k] == 0) numOfTomato++;
			}
		}
	}

	bool isZeroTomato = numOfTomato == 0;
	bool isNotTomato = false;
	int preTomato = numOfTomato;
	int day = 1;

	queue <pair<pair<int, int>, int>> nq;

	for (int k = 0; k < h; ++k) {
		for (int j = 0; j < n; ++j) {
			for (int i = 0; i < m; ++i) {
				if (board[i][j][k] != day) continue;
				queue <pair<pair<int, int>, int>> q;
				q.push({ {i,j},k });
				visited[i][j][k] = true;

				while (!q.empty()) {
					auto curr = q.front(); q.pop();
					for (int z = 0; z < 6; ++z) {
						int nx = curr.first.first + dx[z];
						int ny = curr.first.second + dy[z];
						int nh = curr.second + dh[z];
						if (nx >= m || ny >= n || nh >= h) continue;
						if (nx < 0 || ny < 0 || nh < 0) continue;
						if (board[nx][ny][nh] == -1) continue;
						if (visited[nx][ny][nh]) continue;
						if (board[nx][ny][nh] != 0 && board[nx][ny][nh] == day) continue;

						visited[nx][ny][nh] = true;

						if (board[nx][ny][nh] == day) {
							q.push({ {nx,ny},nh });
						}
						if (board[nx][ny][nh] == 0) {
							board[nx][ny][nh] = day + 1;
							nq.push({ {nx,ny},nh });
							numOfTomato--;
						}
					}
				}
			}
		}
	}

	if (preTomato == numOfTomato) isNotTomato = true;
	while (preTomato != numOfTomato && numOfTomato > 0) {
		preTomato = numOfTomato;
		day++;
		queue <pair<pair<int, int>, int>> q;
		while (!nq.empty()) {
			auto curr = nq.front(); nq.pop();
			for (int z = 0; z < 6; ++z) {
				int nx = curr.first.first + dx[z];
				int ny = curr.first.second + dy[z];
				int nh = curr.second + dh[z];
				if (nx >= m || ny >= n || nh >= h) continue;
				if (nx < 0 || ny < 0 || nh < 0) continue;
				if (board[nx][ny][nh] == -1) continue;
				if (visited[nx][ny][nh]) continue;
				if (board[nx][ny][nh] != 0 && board[nx][ny][nh] == day) continue;

				visited[nx][ny][nh] = true;

				if (board[nx][ny][nh] == day) {
					nq.push({ {nx,ny},nh });
				}
				if (board[nx][ny][nh] == 0) {
					board[nx][ny][nh] = day + 1;
					q.push({ {nx,ny},nh });
					numOfTomato--;
				}
			}
		}
		queue <pair<pair<int, int>, int>> tq;
		tq = q;
		q = nq;
		nq = tq;

		if (preTomato == numOfTomato) {
			isNotTomato = true;
			break;
		}
	}
	if (isZeroTomato) cout << 0;
	else if (isNotTomato)cout << -1;
	else cout << day;
}
