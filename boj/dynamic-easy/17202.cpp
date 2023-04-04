#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[15];

int main() {
	fastio;
	string a, b; cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < 8; ++i) {
		v.push_back(a[i] - 48);
		v.push_back(b[i] - 48);
	}
	for (int j = 0; j < 14; ++j) {
		for (int i = 0; i < 15-j; ++i) {
			v[i] = (v[i] + v[i + 1]) % 10;
		}
	}
	cout << v[0] << v[1];
}
