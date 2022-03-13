#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

bool vis[201];

int solution(int n, vector<vector<int>> computers) {
	int answer = 0;

	for (int i = 0; i < n; ++i) {
		if (vis[i] == true) continue;
		queue<int> q;
		q.push(i); vis[i] = true;

		while (!q.empty()) {
			auto curr = q.front(); q.pop();
			for (int j = 0; j < n; ++j) {
				int nx = computers[curr][j];
				if (vis[j] == true) continue;
				if (computers[curr][j] == 0) continue;
				q.push(j); vis[j] = true;
			}
		}
		answer++;
	}
	return answer;
}
