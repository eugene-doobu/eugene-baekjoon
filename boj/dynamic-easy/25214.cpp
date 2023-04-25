#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n; cin >> n; long long val;
	long long mn = IMPOSSIBLE, mx = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> val;
		if (mn > val) mn = val;
		else mx = max(mx, val - mn);
		cout << mx << ' ';
	}
}
