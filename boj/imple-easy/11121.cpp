#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	string a, b;
	cin >> t;
	while (t--) {
		int q = 0;
		cin >> a >> b;
		if (a.size() != b.size()) {
			cout << "ERROR\n";
			continue;
		}
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != b[i]) {
				cout << "ERROR\n";
				q = 1;
				break;
			}
		}
		if (q == 1) continue;
		cout << "OK\n";
	}
}