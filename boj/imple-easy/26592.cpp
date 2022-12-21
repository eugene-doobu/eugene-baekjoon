#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		double a, b; cin >> a >> b;
		cout << "The height of the triangle is " << fixed << setprecision(2) << a * 2 / b << " units\n";
	}
}