#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	long long rst = 0;
	long n; cin >> n;
	for (long i = 1; i <= n; ++i) {
		rst = rst + i - 1;
	}
	cout << rst;
}
