#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	int n, m, j, curr = 1, rst = 0; cin >> n >> m >> j;
	while (j--) {
		int v, diff = m - 1;
		cin >> v;
		if (curr <= v && (curr + diff) >= v) 
			continue;
		if (v > curr) {
			int move = (v - curr - diff);
			curr += move;
			rst += move;
		}
		else {
			int move = (v - curr);
			curr += move;
			rst += abs(move);
		}
	}
	cout << rst;
}