#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using pii = pair<int, int>;

constexpr int dx[] = { 1, -1, 0, 0 };
constexpr int dy[] = { 0, 0, -1, 1 };

int n, rst = 0;
int board[101][101];
bool visited[101][101];

void Input()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> board[i][j];
}

void Solve(int depth)
{
    int currentResult = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (visited[i][j]) continue;
            if (board[i][j] <= depth) continue;

            queue<pii> q; q.push({ i,j });
            visited[i][j] = true;
            currentResult++;

            while (!q.empty())
            {
                const auto value = q.front(); q.pop();
                for (int i = 0; i < 4; ++i)
                {
                    int cx = value.first + dx[i];
                    int cy = value.second + dy[i];

                    if (cx < 0 || cx >= n || cy < 0 || cy >= n) continue;
                    if (visited[cx][cy]) continue;
                    if (board[cx][cy] <= depth) continue;

                    q.emplace(cx, cy);
                    visited[cx][cy] = true;
                }
            }
        }
    }

    memset(visited, 0, sizeof(visited));
    rst = max(rst, currentResult);
}

int main()
{
    fastio;
    Input();
    for (int i = 0; i <= 100; ++i) Solve(i);
    cout << rst;
}