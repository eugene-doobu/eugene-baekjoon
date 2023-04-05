#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[15];

int main() {
	fastio;
	int n = 4, rst = 0;
	while (n--) {
		string s; int q; cin >> s >> q;
		if (s == "Es") rst += q * 21;
		else rst += q * 17;
	}
	cout << rst;
}
