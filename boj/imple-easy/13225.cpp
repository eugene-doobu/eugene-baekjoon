#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio; 
	int n; cin >> n;
	while (n--) {
		int q; cin >> q; int rst = 0;
		for (int i = 1; i <= q; ++i) {
			if (q % i == 0) rst++;
		}
		cout << q << ' ' << rst << "\n";
	}
}

