#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio;
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		int size = s.size();
		if (s[size/2-1] == s[size/2]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}
}
