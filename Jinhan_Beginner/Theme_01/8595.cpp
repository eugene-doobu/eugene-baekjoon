#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	long n; string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] < '0' || s[i] > '9') s[i] = ' ';
	}
	istringstream in_1(s);
	long rst = 0;
	while (in_1 >> n) rst += n;
	cout << rst << "\n";
	return 0;
}