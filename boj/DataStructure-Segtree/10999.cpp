#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define MAXSIZE 1000001

long long v[MAXSIZE], tree[MAXSIZE * 4], lazy[MAXSIZE * 4];

void init(int node, int start, int end) {
	if (start == end) tree[node] = v[start];
	else {
		init(node * 2, start, (start + end) / 2);
		init(node * 2 + 1, (start + end) / 2 + 1, end);
		tree[node] = tree[node * 2] + tree[node * 2 + 1];
	}
}

void updateLazy(int node, int start, int end) {
	if (lazy[node] == 0) return;
	tree[node] += (end - start + 1) * lazy[node];
	if (start != end) {
		lazy[node * 2] += lazy[node];
		lazy[node * 2 + 1] += lazy[node];
	}
	lazy[node] = 0;
}

void update(int node, int start, int end, int l, int r, long long val) {
	updateLazy(node, start, end);
	if (r < start || l > end) return;
	if (l <= start && end <= r) {
		tree[node] += (end - start + 1) * val;
		if (start != end) {
			lazy[node * 2] += val;
			lazy[node * 2 + 1] += val;
		}
		return;
	}
	update(node * 2, start, (start + end) / 2, l, r, val);
	update(node * 2 + 1, (start + end) / 2 + 1, end, l, r, val);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(int node, int start, int end, int left, int right) {
	updateLazy(node, start, end);
	if (left > end || right < start) return 0;
	if (left <= start && end <= right) return tree[node];
	long long lsum = query(node * 2, start, (start + end) / 2, left, right);
	long long rsum = query(node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	return lsum + rsum;
}

int main() {
	fastio;
	int n, m, k; cin >> n >> m >> k;
	m += k;
	for (int i = 0; i < n; i++) cin >> v[i];
	init(1, 0, n - 1);
	while (m--) {
		int q, l, r; cin >> q >> l >> r;
		if (q == 1) {
			long long val; cin >> val;
			update(1, 0, n - 1, l-1, r-1 , val);
		}
		else if (q == 2) {
			cout << query(1, 0, n - 1, l - 1, r - 1) << '\n';
		}
	}
}
