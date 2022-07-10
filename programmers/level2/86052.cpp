#include <bits/stdc++.h>
using namespace std;

int r, c;
int dx[4] = { 0,-1,0,1 }; // 상 좌 하 우
int dy[4] = { 1,0,-1,0 };

bool vis[501][501][4];

void solve(int i, int j, int k, const vector<string>& grid, vector<int>& answer) {
    int length = 0;
    int startI = i, startJ = j, startK = k;
    while (true) {
        if (vis[i][j][k]) return;
        vis[i][j][k] = true;

        i = (i + dx[k] + r) % r;
        j = (j + dy[k] + c) % c;

        switch (grid[i][j])
        {
        case 'L':
            k = (k + 1) % 4;
            break;
        case 'R':
            k = (k - 1 + 4) % 4;
            break;
        }

        length++;

        if (startI == i && startJ == j && startK == k) {
            answer.push_back(length);
            return;
        }
    }
}

vector<int> solution(vector<string> grid) {
    vector<int> answer;

    r = grid.size();
    c = grid[0].size();

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            for (int k = 0; k < 4; ++k)
                solve(i, j, k, grid, answer);

    sort(answer.begin(), answer.end());
    return answer;
}