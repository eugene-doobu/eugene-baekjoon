#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bitset<100'000'001> A;

int main() {
	fastio;
	int n, m; cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		int t; cin >> t;
		A[t].flip();
	}
	cout << A.count() << '\n';
}