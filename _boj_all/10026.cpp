#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

string board[102];
bool visited[102][102];
bool c_visited[102][102];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	fastio;
	int n, cnt = 0, c_cnt=0; cin >> n;
	string a;
	for (int i = 0; i < n; ++i) cin >> board[i];
	queue<pair<int, int>> q, c_q;
	for (int x = 0; x < n; ++x) {
		for (int y = 0; y < n; ++y) {
			if (visited[x][y] == false) {
				q.push({ x, y }); visited[x][y] = true; auto currC = board[x][y]; cnt++;
				while (!q.empty()) {
					auto curr = q.front(); q.pop();
					for (int i = 0; i < 4; ++i) {
						int nx = curr.first + dx[i];
						int ny = curr.second + dy[i];
						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (visited[nx][ny] || board[nx][ny] != currC) continue;
						visited[nx][ny] = true;
						q.push({ nx, ny });
					}
				}
			}
			if (c_visited[x][y] == false) {
				c_q.push({ x, y }); c_visited[x][y] = true; auto currC = board[x][y]; c_cnt++;
				while (!c_q.empty()) {
					auto curr = c_q.front(); c_q.pop();
					for (int i = 0; i < 4; ++i) {
						int nx = curr.first + dx[i];
						int ny = curr.second + dy[i];
						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (c_visited[nx][ny]) continue;
						if (board[nx][ny] == 'B' && 'B' != currC) continue;
						if ((board[nx][ny] == 'G' || board[nx][ny] == 'R') && 'B' == currC) continue;
						c_visited[nx][ny] = true;
						c_q.push({ nx, ny });
					}
				}
			}
		}
	}
	cout << cnt << ' ' << c_cnt;
}