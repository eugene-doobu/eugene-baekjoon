#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int board[51][51];
vector<pair<int, int>> virusP;

int n, m, numOfZero;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 0)numOfZero++;
            else if (board[i][j] == 2) virusP.push_back({ i,j });
        }
    }

    if (numOfZero == 0) {
        cout << 0;
        return 0;
    }

    vector<int> cv(virusP.size());
    for (int i = 1; i <= m; ++i) cv[cv.size() - i] = 1;
    int mn = 0x7f7f7f;

    do {
        queue<pair<int, int>> q, eq;
        int tmpBoard[51][51];
        int deleteZeroCnt = 0, timeCnt = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                tmpBoard[i][j] = board[i][j];
            }
        }

        for (int i = 0; i < cv.size(); i++) {
            if (cv[i] == 1) {
                q.push({ virusP[i].first, virusP[i].second });
            }
        }

        while (true) {
            // 이부분 함수화해서 처리하면 깔끔할듯 합니다.
            while (!q.empty()) {
                auto curr = q.front(); q.pop();
                for (int i = 0; i < 4; ++i) {
                    int nx = curr.first + dx[i];
                    int ny = curr.second + dy[i];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (tmpBoard[nx][ny] == 1) continue;
                    eq.push({ nx, ny });
                    if (tmpBoard[nx][ny] == 0) deleteZeroCnt++;
                    tmpBoard[nx][ny] = 1; 
                }
            }
            timeCnt++;
            if (numOfZero - deleteZeroCnt == 0) break;
            while (!eq.empty()) {
                auto curr = eq.front(); eq.pop();
                for (int i = 0; i < 4; ++i) {
                    int nx = curr.first + dx[i];
                    int ny = curr.second + dy[i];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (tmpBoard[nx][ny] == 1) continue;
                    q.push({ nx, ny });
                    if (tmpBoard[nx][ny] == 0) deleteZeroCnt++;
                    tmpBoard[nx][ny] = 1;
                }
            }
            timeCnt++;
            if (numOfZero - deleteZeroCnt == 0) break;
            if (q.empty() && eq.empty()) {
                timeCnt = 0x7f7f7f;
                break;
            }
        }

        mn = min(mn, timeCnt);
    } while (next_permutation(cv.begin(), cv.end()));
    cout << ((mn == 0x7f7f7f) ? -1 : mn);
}