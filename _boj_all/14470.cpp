#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int rst=0, a, b, c, d, e; cin >> a >> b >> c >> d >> e;
	if (a > 0) {
		rst += (b - a) * e;
	}
	else {
		rst += abs(a) * c + d;
		rst += b * e;
	}
	cout << rst;
}