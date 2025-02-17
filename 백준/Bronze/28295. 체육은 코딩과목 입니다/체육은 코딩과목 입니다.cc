#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	int t, d = 0, z=10;
	while (z--) {
		cin >> t;
		if (t == 1) d = (d + 1) % 4;
		else if (t == 2) d = (d + 2) % 4;
		else d = (d + 3) % 4;
	}
	if (d == 0) cout << "N";
	if (d == 1) cout << "E";
	if (d == 2) cout << "S";
	if (d == 3) cout << "W";
}