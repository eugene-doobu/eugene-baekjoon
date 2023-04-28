#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		int a, b; cin >> a >> b;
		cout << "Case "<< i << ": " << a + b << "\n";
	}
}
