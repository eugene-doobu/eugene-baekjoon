#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c; cin >> a >> b >> c;
		cout << a << " " << b << " " << c << endl;
		if (a >= 10 && b >= 10 && c >= 10) {
			cout << "triple-double" << endl;
		}
		else if (a >= 10 && b >= 10 || a >= 10 && c >= 10 || b >= 10 && c >= 10) {
			cout << "double-double" << endl;
		}
		else if (a >= 10 || b >= 10 || c >= 10) {
			cout << "double" << endl;
		}
		else {
			cout << "zilch" << endl;
		}
		cout << endl;
	}
}