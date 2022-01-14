#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

char Map[50][50];

int main() {
	fastio;
	int r, c, minV=2e9; cin >> r >> c;
	for (int x = 0; x < r; ++x) for (int y = 0; y < c; ++y) cin >> Map[x][y];
	for (int a = 0; a < r - 7; ++a) {
		for (int b = 0; b < c - 7; ++b) {
			int t1 = 0, t2 = 0;
			for (int x = a; x < a+8; ++x) for (int y = b; y < b+8; ++y) {
				if ((x + y) % 2 == 0) {
					if (Map[x][y] == 'W') ++t2;
					else ++t1;
				}
				else {
					if (Map[x][y] == 'B') ++t2;
					else ++t1;
				}
			}
			minV = min(min(t1, t2), minV);
		}
	}
	cout << minV;
}