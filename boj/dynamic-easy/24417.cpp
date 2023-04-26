#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long one = 1;

void fibo2(int n) {
	int x = 1, z;
	for (int i = 3; i <= n; ++i) {
		z = one;
		one = (x + one) % 1000000007;
		x = z;
	}
}


int main() {
	fastio;
	int n; cin >> n;
	fibo2(n);
	cout << one << ' ' << n-2;
}
