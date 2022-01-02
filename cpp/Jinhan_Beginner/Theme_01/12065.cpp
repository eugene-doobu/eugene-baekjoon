#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n; 
	cin >> n; cin.ignore();
	for (int i = 0; i < n; i++) {
		string s;  getline(cin, s); string rst = "", tmp;
		istringstream in_1(s);
		while (in_1 >> tmp) rst = tmp + " " + rst;
		cout << "Case #" << i+1 << ": " << rst << "\n";
	}
	return 0;
}