#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

string board[26];
bool visited[26][26];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    fastio;
    int nums = 0; vector<int> v;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> board[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) 
        {
            if (visited[i][j] || board[i][j] == '0') continue;
            int currNum = 1; nums++;
            queue<pair<int, int>> q;
            q.push({ i,j }); visited[i][j] = true;
            while (!q.empty()) {
                auto curr = q.front(); q.pop();
                for (int i = 0; i < 4; ++i) {
                    int nx = curr.first + dx[i];
                    int ny = curr.second + dy[i];
                    if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
                    if (visited[nx][ny]) continue;
                    if (board[nx][ny] == '0') continue;
                    visited[nx][ny] = true; q.push({ nx, ny }); currNum++;
                }
            }
            v.push_back(currNum);
        }
    }

    cout << nums << "\n";
    sort(v.begin(), v.end());
    for(auto i:v) cout << i << "\n";
}