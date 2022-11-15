#include <bits/stdc++.h>
using namespace std;
long double a;
int main() {
	int t; cin >> t;
	while (t--) {
		long double b; cin >> b;
		a += b * b * b;
	}
	cout << setprecision(120) << pow(a, 1.0 / 3.0);
}