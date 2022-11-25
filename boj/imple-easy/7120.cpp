#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, rst=""; cin >> s;
	char c = ')';
	for (char q : s) {
		if (c != q) {
			rst += q;
			c = q;
		}
	}
	cout << rst;
}