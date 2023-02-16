#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void initMin(vector<long long>& v, vector<long long>& minTree, int node, int start, int end) {
	if (start == end) minTree[node] = v[start];
	else {
		initMin(v, minTree, node * 2, start, (start + end) / 2);
		initMin(v, minTree, node * 2 + 1, (start + end) / 2 + 1, end);
		minTree[node] = min(minTree[node * 2], minTree[node * 2 + 1]);
	}
}

long long queryMin(vector<long long>& minTree, int node, int start, int end, int left, int right) {
	if (left > end || right < start) return 0xffffffff;
	if (left <= start && end <= right) return minTree[node];
	long long lMin = queryMin(minTree, node * 2, start, (start + end) / 2, left, right);
	long long rMin = queryMin(minTree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	return min(lMin, rMin);
}

void update(vector<long long>& v, vector<long long>& tree, int node, int start, int end, int index, long long val) {
	if (index < start || index > end) return;
	if (start == end) {
		tree[node] = v[index] = val;
		return;
	}
	update(v, tree, node * 2, start, (start + end) / 2, index, val);
	update(v, tree, node * 2 + 1, (start + end) / 2 + 1, end, index, val);
	tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}

int main() {
	fastio;
	int n; cin >> n;
	int t; cin >> t;
	vector<long long> v(n);
	int h = (int)ceil(log2(n));
	int treeSize = (1 << (h + 1));

	vector<long long> minTree(treeSize);
	fill(minTree.begin(), minTree.end(), 0xffffffff);

	for (int i = 0; i < n; i++) cin >> v[i];
	initMin(v, minTree, 1, 0, n - 1);
	while (t--) {
		int l, r; cin >> l >> r;
		cout << queryMin(minTree, 1, 0, n - 1, l-1, r-1) << "\n";
	}
}
