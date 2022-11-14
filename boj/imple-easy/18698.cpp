#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int a = 0;
		string s; cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'U') a++;
			else break;
		}
		cout << a << "\n";
	}
}