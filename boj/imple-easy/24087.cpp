#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, rst = 250;
	cin >> a >> b >> c;
	a -= b;
	while (a > 0) {
		a -= c;
		rst += 100;
	}
	cout << rst;
}