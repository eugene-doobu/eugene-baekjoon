#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio; 
	int n, cnt=0; string s; cin >> n >> s;
	for (int i = 0; i < n / 2; ++i) if (s[i] != s[s.size() -1 - i]) cnt++;
	cout << cnt;
}

