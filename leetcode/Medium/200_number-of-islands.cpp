class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
	int r = grid.size(), c = grid[0].size();
	int rst = 0;

	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (grid[i][j] != '1') continue;
			rst++;
            
			queue<pair<int, int>> q;
			q.push({ i,j });
			grid[i][j] = '0';

			while (!q.empty()) {
				auto curr = q.front(); q.pop();
				for (int k = 0; k < 4; ++k) {
					int nx = curr.first + dx[k];
					int ny = curr.second + dy[k];
					if (nx >= r || ny >= c || nx < 0 || ny < 0) continue;
					if (grid[nx][ny] != '1') continue;
					q.push({ nx, ny });
					grid[nx][ny] = '0';
				}
			}
		}
	}
	return rst;
    }
};