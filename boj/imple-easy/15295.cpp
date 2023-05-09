#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n; cin >> n;
	while (n--) {
		int i, k; cin >> i >> k;
		int rst = k;
		for (int j = 1; j <= k; ++j) rst += j;
		cout << i << ' ' << rst << "\n";
	}
}

