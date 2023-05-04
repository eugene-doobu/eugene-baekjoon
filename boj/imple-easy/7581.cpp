#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	while (true) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		if (a == 0) a = (d / b) / c;
		if (b == 0) b = (d / a) / c;
		if (c == 0) c = (d / a) / b;
		if (d == 0) d = a * b * c;
		cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
	}
}
