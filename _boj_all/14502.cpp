#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m, zCnt=0, mx=-1;
int board[8][8];
int tmpBoard[8][8];
vector<pair<int, int>> zeroPos;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void TmpBoardReset(queue<pair<int, int>>& q) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			tmpBoard[i][j] = board[i][j];
			if (tmpBoard[i][j] == 2) q.push({ i, j });
		}
	}
}

int main() {
	fastio;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> board[i][j];
			if (board[i][j] == 0) {
				zeroPos.push_back({ i, j });
				zCnt++;
			} 
		}
	}
	vector<int> comV(zCnt);
	for (int i = 1; i <= 3; ++i) comV[comV.size() - i] = 1;
	do {
		queue<pair<int, int>> q;
		TmpBoardReset(q);
		for(int i=0; i<zCnt; ++i) if (comV[i] == 1) {
			tmpBoard[zeroPos[i].first][zeroPos[i].second] = 1;
		}
		while (!q.empty()) {
			auto curr = q.front(); q.pop();
			for (int i = 0; i < 4; ++i) {
				int nx = curr.first + dx[i];
				int ny = curr.second + dy[i];
				if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
				if (tmpBoard[nx][ny] != 0) continue;
				q.push({ nx, ny }); tmpBoard[nx][ny] = 2;
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (tmpBoard[i][j] == 0) cnt++;
			}
		}
		mx = max(mx, cnt);
	} while (next_permutation(comV.begin(), comV.end()));
	std::cout << mx;
}