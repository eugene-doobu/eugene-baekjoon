#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	while (c--) {
		int d; cin >> d;
		if (d <= 1000) {
			cout << d << " " << d * a << "\n";
		}
		else {
			int dm = d - 1000;
			cout << d << " " << (1000 * a) + (dm * b) << "\n";
		}
	}
}