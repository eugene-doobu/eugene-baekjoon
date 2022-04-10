#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int board[102][102];
int pos[4];

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
	vector<int> answer; 
    int Num = 1;
    for (int i = 1; i <= rows; i++)
        for (int j = 1; j <= columns; j++)
            board[i][j] = Num++;

    for (int i = 0; i < queries.size(); i++)
    {
        for (int j = 0; j < 4; ++j) pos[j] = queries[i][j];
        int x = pos[0], y = pos[1], gx = pos[2], gy = pos[3];
        int mn = 123456, tmp = board[x][y];
        for (int i = x; i < gx; ++i) {
            mn = min(mn, board[i][y]);
            board[i][y] = board[i + 1][y];
        }
        for (int i = y; i < gy; ++i) {
            mn = min(mn, board[gx][i]);
            board[gx][i] = board[gx][i + 1];
        }
        for (int i = gx; i > x; --i) {
            mn = min(mn, board[i][gy]);
            board[i][gy] = board[i - 1][gy];
        }
        for (int i = gy; i > y; --i) {
            mn = min(mn, board[x][i]);
            board[x][i] = board[x][i - 1];
        }
        board[x][y + 1] = tmp;
        answer.push_back(mn);
    }
	return answer;
}
