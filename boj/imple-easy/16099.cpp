#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		unsigned long long a, b, c, d; cin >> a >> b >> c >> d;
		if (a * b > c * d) cout << "TelecomParisTech" << endl;
		else if (a * b < c * d) cout << "Eurecom" << endl;
		else cout << "Tie" << endl;
	}
}