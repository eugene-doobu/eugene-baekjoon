#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	while (true) {
		int n, m; cin >> n >> m;
		if (n == m && n == 0) break;
		if (n > m) cout << "Yes\n";
		else cout << "No\n";
	}
}