#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, rst = 0; cin >> n;
	while (n--) {
		string s; cin >> s;
		s = s.substr(2, s.size());
		int x = stoi(s, 0);
		if (x <= 90) rst++;
	}
	cout << rst;
}