#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int N;
int ocean[20][20];
int dy[] = { -1, 0, 0, 1 }, dx[] = { 0, -1, 1, 0 };

struct Fish {
    int y, x, dist;
    bool operator<(const Fish& b) const {
        if (dist == b.dist) {
            if (y == b.y) return x > b.x;
            return y > b.y;
        }
        return dist > b.dist;
    }
};

queue<Fish> shark;

int getMaxTime() {
    int time = 0, eat = 0, size = 2;
    while (true) {
        priority_queue<Fish> feed;
        vector<vector<bool>> visit(N, vector<bool>(N));
        while (!shark.empty()) {
            Fish curr = shark.front();
            shark.pop();

            for (int i = 0; i < 4; ++i) {
                int ny = curr.y + dy[i], nx = curr.x + dx[i];
                if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
                if (visit[ny][nx] || ocean[ny][nx] > size) continue;
                visit[ny][nx] = true;
                shark.push({ ny, nx, curr.dist + 1 });
                if (ocean[ny][nx] < size && ocean[ny][nx] != 0)
                    feed.push({ ny, nx, curr.dist + 1 });
            }
        }
        if (feed.empty()) break;
        Fish selected = feed.top();
        int feedY = selected.y, feedX = selected.x, feedSize = ocean[feedY][feedX];
        if (++eat == size) {
            eat = 0; size++;
        }
        ocean[feedY][feedX] = 0;
        shark.push({ feedY, feedX, 0 });
        time += selected.dist;
    }
    return time;
}

int main() {
    fastio;
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            cin >> ocean[i][j];
            if (ocean[i][j] == 9)
            {
                ocean[i][j] = 0;
                shark.push({ i, j, 0 });
            }
        }
    cout << getMaxTime() << '\n';
}
