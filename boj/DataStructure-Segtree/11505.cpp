#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void init(vector<long long>& v, vector<long long>& tree, int node, int start, int end) {
	if (start == end) tree[node] = v[start];
	else {
		init(v, tree, node * 2, start, (start + end) / 2);
		init(v, tree, node * 2 + 1, (start + end) / 2 + 1, end);
		tree[node] = (tree[node * 2] * tree[node * 2 + 1]) % 1000000007;
	}
}

void update(vector<long long>& v, vector<long long>& tree, int node, int start, int end, int index, long long val) {
	if (index < start || index > end) return;
	if (start == end) {
		tree[node] = v[index] = val;
		return;
	}
	update(v, tree, node * 2, start, (start + end) / 2, index, val);
	update(v, tree, node * 2 + 1, (start + end) / 2 + 1, end, index, val);
	tree[node] = (tree[node * 2] * tree[node * 2 + 1]) % 1000000007;
}

long long query(vector<long long>& tree, int node, int start, int end, int left, int right) {
	if (left > end || right < start) return 1;
	if (left <= start && end <= right) return tree[node];
	long long lsum = query(tree, node * 2, start, (start + end) / 2, left, right);
	long long rsum = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	return (lsum * rsum) % 1000000007;
}

int main() {
	fastio;
	int n, m, k;
	cin >> n >> m >> k;
	vector<long long> v(n); // 수가 담길 배열
	int h = (int)ceil(log2(n));
	int tree_size = (1 << (h + 1));
	vector<long long> tree(tree_size); // 배열의 세그트리를 위한 배열
	fill(tree.begin(), tree.end(), 1);
	m += k;
	for (int i = 0; i < n; i++) cin >> v[i];
	init(v, tree, 1, 0, n - 1);
	while (m--) {
		int q; cin >> q;
		if (q == 1) {
			int idx; long long val; cin >> idx >> val;
			update(v, tree, 1, 0, n - 1, idx - 1, val);
		}
		else if (q == 2) {
			int l, r; cin >> l >> r;
			cout << query(tree, 1, 0, n - 1, l - 1, r - 1) << '\n';
		}
	}
}
