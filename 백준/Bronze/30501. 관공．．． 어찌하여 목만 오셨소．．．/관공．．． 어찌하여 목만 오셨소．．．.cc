#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		for (int i = 0; i < s.length(); ++i)
			if (s[i] == 'S') cout << s;
	}
}