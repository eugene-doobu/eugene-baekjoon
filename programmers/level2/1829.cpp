#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    bool vis[102][102];
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };
    memset(vis,false,sizeof(vis));
    
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (picture[i][j] == 0 || vis[i][j]) continue;
            int areaSize = 0, currColor = picture[i][j];
            queue<pair<int, int>> q;
            q.push({ i, j }); vis[i][j] = true;
            number_of_area++; areaSize++;
            
            while (!q.empty()) {
                auto curr = q.front(); q.pop();
                for (int k = 0; k < 4; ++k) {
                    int nx = curr.first + dx[k];
                    int ny = curr.second + dy[k];
                    if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
                    if (vis[nx][ny]) continue;
                    if (picture[nx][ny] != currColor) continue;
                    areaSize++; vis[nx][ny] = true;
                    q.push({ nx, ny });
                }
            }
            max_size_of_one_area = max(max_size_of_one_area, areaSize);
        }
    }
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    cout << number_of_area << ' ' << max_size_of_one_area;
    return answer;
}