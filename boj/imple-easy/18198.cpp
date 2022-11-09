#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	string s; cin >> s;
	for (int i = 0; i < s.size(); i += 2) {
		if (i >= s.size()) break;
		if (s[i] == 'A') a += s[i + 1] - '0';
		else b += s[i + 1] - '0';
	}
	cout << (a > b ? "A" : "B") << endl;
}