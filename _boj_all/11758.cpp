#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
	int rst = (x1 * y2 + x2 * y3 + x3 * y1) - (y1 * x2 + y2 * x3 + y3 * x1);
	return rst > 0 ? 1 : rst < 0 ? -1 : 0;
}

int main() {
	fastio;
	int x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << ccw(x1, y1, x2, y2, x3, y3);
}