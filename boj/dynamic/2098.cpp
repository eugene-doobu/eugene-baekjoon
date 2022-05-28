#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

#define MAX 16
using namespace std;
const int IMPOSSIBLE = -1;
const int INF = 0x7f7f7f7f;
int N, W[MAX][MAX], GOAL;
int dp[MAX][1 << MAX]; // 현재위치, 지금까지 방문한 도시

int TSP(int curr, int vis) {
	if (vis == GOAL) {
		if (W[curr][0] == 0) return INF;
		return W[curr][0];
	}

	int& ret = dp[curr][vis];
	if (ret != -1) return ret;
	ret = INF;

	for (int i = 0; i < N; ++i) {
		if (vis & (1 << i)) continue; // 이미 방문한 경우 스킵
		if (W[curr][i] == 0) continue; // 갈 수 없는 경우 스킵
		ret = min(ret, TSP(i, vis | (1 << i)) + W[curr][i]);
	}
	return ret;
}

int main() {
	fastio;
	cin >> N; GOAL = (1 << N) - 1;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			cin >> W[i][j];
	memset(dp, -1, sizeof(dp));
	cout << TSP(0, 1);
}