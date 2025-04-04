#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, ans=0; cin >> n;
	while (n--) {
		string s; cin >> s;
		if (s[0] == 'C') ans++;
	} cout << ans;
}