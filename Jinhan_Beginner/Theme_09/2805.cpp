#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m, tree[1'000'000];

bool Check(const int mid) {
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		if(tree[i] > mid) sum += (tree[i] - mid);
	}
	return sum >= m;
}

int main() {
	fastio;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> tree[i];
	int lo = 0, hi = 1e9;

	while (lo + 1 < hi) {
		int mid = (lo + hi) / 2;
		if (Check(mid)) lo = mid;
		else hi = mid;
	}
	cout << lo;
}