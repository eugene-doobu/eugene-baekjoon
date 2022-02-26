#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int board[45][45];
int tmpBoard[45][45];
int keyTmp[21][21];

int MapInit(vector<vector<int>> lock, int m, int n) {
	int padding = m - 1, sSize = n + padding * 2;
	for (int i = padding; i < padding + n; ++i) {
		for (int j = padding; j < padding + n; ++j) {
			board[i][j] = lock[i - padding][j - padding];
		}
	}
	return sSize;
}

int Check(int m, int n) {
	int padding = m - 1;

	for (int i = padding; i < padding + n; ++i) {
		for (int j = padding; j < padding + n; ++j) {
			if (tmpBoard[i][j] == 0) return false;
		}
	}
	return true;
}

void TmpInit(int sSize) {
	for (int i = 0; i < sSize; ++i) {
		for (int j = 0; j < sSize; ++j) {
			tmpBoard[i][j] = board[i][j];
		}
	}
}

bool KeyInput(vector<vector<int>> key, int i, int j, int m, int sSize) {
	for (int a = i; a < i + m; ++a) {
		for (int b = j; b < j + m; ++b) {
			if (key[a - i][b - j] == 0) continue;
			if (tmpBoard[a][b] == 1 && key[a - i][b - j] == 1) return false;
			tmpBoard[a][b] = key[a - i][b - j];
		}
	}
	return true;
}

void Rotate(vector<vector<int>> &key, int m) {
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < m; ++j)
			keyTmp[i][j] = key[m - j - 1][i];
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < m; ++j)
			key[i][j] = keyTmp[i][j];
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	bool answer = false;
	int m = key.size(), n = lock.size();
	int sSize = MapInit(lock, m, n);

	for (int k = 0; k < 4; ++k) {
		for (int i = 0; i < sSize -m + 1; ++i) {
			for (int j = 0; j < sSize - m + 1; ++j) {
				TmpInit(sSize);
				if (!KeyInput(key, i, j, m, sSize)) continue;
				if (Check(m, n)) return true;
			}
		}
		Rotate(key, m);
	}
	return false;
}