#include <bits/stdc++.h>
using namespace std;
int main() {
	while (1) {
		long a, b; cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << a - (b - a) << "\n";
	}
}