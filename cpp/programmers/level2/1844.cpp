#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int cnt[102][102];

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();

    queue<pair<int, int>> q;
    q.push({ 0,0 });
    cnt[0][0] = 1;

    while (!q.empty()) {
        auto curr = q.front(); q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = curr.first + dx[i];
            int ny = curr.second + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (cnt[nx][ny] != 0) continue;
            if (maps[nx][ny] == 0) continue;
            q.push({ nx, ny });
            cnt[nx][ny] = cnt[curr.first][curr.second] + 1;
        }
    }

    return cnt[n - 1][m - 1] ? cnt[n - 1][m - 1] : -1;
}