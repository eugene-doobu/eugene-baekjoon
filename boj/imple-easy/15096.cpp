#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n, z=0; long double q = 0;
	cin >> n;
	while (n--) {
		int a; cin >> a;
		if (a == -1) continue; z++;
		q += a;
	}
	cout << q / z;
}

