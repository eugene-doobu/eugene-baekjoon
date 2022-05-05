#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m;
string board[100];

int main() {
    fastio;
    int mx = 2, shadeCnt = 0, dotCnt=0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == '/' || board[i][j] == '\\') {
                shadeCnt++;
            }
            else if(shadeCnt %2) {
                dotCnt++;
            }
        }
    }
    cout << (shadeCnt / 2 + dotCnt);
}
