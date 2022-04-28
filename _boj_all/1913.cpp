#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int board[999][999];

int main() {
    fastio;
    int n, m, cycle =0; cin >> n >> m;
    int nn = n * n, currCycle = n, cnt=0, currNum = n*n, evenCnt = 1;
    int x = 0, y = 0, goalx=0, goaly=0;
    for (int i = 0; i < nn; ++i) {
        board[x][y] = currNum--;
        cnt++;
        if (cnt == currCycle) {
            cnt = 0; cycle++; evenCnt--;
            if (evenCnt == 0) {
                evenCnt = 2;
                currCycle--;
            }
        }
        if (cycle % 4 == 0) x += 1;
        if (cycle % 4 == 1) y += 1;
        if (cycle % 4 == 2) x -= 1;
        if (cycle % 4 == 3) y -= 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << ' ';
            if (board[i][j] == m) {
                goalx = i + 1;
                goaly = j + 1;
            }
        }
        cout << "\n";
    }
    cout << goalx << ' ' << goaly;
}