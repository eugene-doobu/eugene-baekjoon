#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, s, cnt=0; cin >> n >> s; vector<int> v; for (int i = 0; i < n; ++i) { int tmp; cin >> tmp; v.push_back(tmp); }
	for (int i = 1; i < 1 << n; ++i) {
		int sum = 0;
		for (int j = 0; j < n; ++j) if (i & 1 << j) sum += v[j];
		if (sum == s) ++cnt;
	}
	cout << cnt;
}