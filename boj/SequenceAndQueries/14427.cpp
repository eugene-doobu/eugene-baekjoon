#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void initMin(vector<long long>& v, vector<long long>& minTree, int node, int start, int end) {
	if (start == end) minTree[node] = start;
	else {
		initMin(v, minTree, node * 2, start, (start + end) / 2);
		initMin(v, minTree, node * 2 + 1, (start + end) / 2 + 1, end);

		minTree[node] = min(minTree[node * 2], minTree[node * 2 + 1]);
		if (v[minTree[node * 2]] > v[minTree[node * 2 + 1]]) {
			minTree[node] = minTree[node * 2 + 1];
		}
		if (v[minTree[node * 2]] < v[minTree[node * 2 + 1]]) {
			minTree[node] = minTree[node * 2];
		} 
	}
}

void update(vector<long long>& v, vector<long long>& tree, int node, int start, int end, int index, long long val) {
	if (index < start || index > end) return;
	if (start == end) {
		return;
	}
	update(v, tree, node * 2, start, (start + end) / 2, index, val);
	update(v, tree, node * 2 + 1, (start + end) / 2 + 1, end, index, val);

	tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
	if (v[tree[node * 2]] > v[tree[node * 2 + 1]]) {
		tree[node] = tree[node * 2 + 1];
	}
	if (v[tree[node * 2]] < v[tree[node * 2 + 1]]) {
		tree[node] = tree[node * 2];
	}
}

int main() {
	fastio;
	int n; cin >> n;
	vector<long long> v(n);
	int h = (int)ceil(log2(n));
	int treeSize = (1 << (h + 1));

	vector<long long> minTree(treeSize);
	fill(minTree.begin(), minTree.end(), 0xffffffff);

	for (int i = 0; i < n; i++) cin >> v[i];
	initMin(v, minTree, 1, 0, n - 1);

	int t; cin >> t;
	while (t--) {
		int q; cin >> q;
		if (q == 2) {
			cout << minTree[1] + 1 << "\n";
		}
		else {
			int w, q; cin >> w >> q;
			v[w - 1] = q;
			update(v, minTree, 1, 0, n - 1, w - 1, q - 1);
		}
	}
}
