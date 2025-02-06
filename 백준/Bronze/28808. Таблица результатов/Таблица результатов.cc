#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio; int n, m, r=0; cin >> n >> m;
	while (n--) {
		string s; cin >> s;
		if (s.find('+') != string::npos) r++;
	} cout << r;
}