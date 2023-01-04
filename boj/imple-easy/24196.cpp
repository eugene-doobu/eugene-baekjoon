#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	string s; cin >> s;
	b = s.length() - 1;
	while (a < b) {
		cout << s[a];
		a += s[a] - 'A' + 1;
	}
	cout << s[b];
}