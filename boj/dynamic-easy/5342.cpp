#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	double q = 0;
	while (true) {
		string s; cin >> s;
		if (s == "Paper") q += 57.99;
		if (s == "Printer") q += 120.50;
		if (s == "Planners") q += 31.25;
		if (s == "Binders") q += 22.50;
		if (s == "Calendar") q += 10.95;
		if (s == "Notebooks") q += 11.20;
		if (s == "Ink") q += 66.95;
		if (s == "EOI") break;
	}
	cout << "$" << q;
}
