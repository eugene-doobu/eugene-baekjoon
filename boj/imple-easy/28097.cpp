#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio; 
	int n, rst = 0; cin >> n;
	rst += (n - 1) * 8;
	while (n--) {
		int q; cin >> q; rst += q;
	}
	cout << (rst / 24) << ' ' <<  (rst % 24);
}

