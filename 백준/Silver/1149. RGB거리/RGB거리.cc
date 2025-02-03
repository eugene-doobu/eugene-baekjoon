#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int d[1002][3];

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 0; i < 3; ++i) cin >> d[1][i];
	for (int i = 2; i <= n; ++i) {
		int r, g, b; cin >> r >> g >> b;
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + r;
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + g;
		d[i][2] = min(d[i - 1][1], d[i - 1][0]) + b;
	}
	cout << min(d[n][0], min(d[n][1], d[n][2]));
}