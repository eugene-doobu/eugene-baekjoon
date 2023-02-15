#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

void initMax(vector<long long>& v, vector<long long>& minTree, int node, int start, int end) {
	if (start == end) minTree[node] = v[start];
	else {
		initMax(v, minTree, node * 2, start, (start + end) / 2);
		initMax(v, minTree, node * 2 + 1, (start + end) / 2 + 1, end);
		minTree[node] = max(minTree[node * 2], minTree[node * 2 + 1]);
	}
}

long long queryMax(vector<long long>& minTree, int node, int start, int end, int left, int right) {
	if (left > end || right < start) return -1;
	if (left <= start && end <= right) return minTree[node];
	long long lsum = queryMax(minTree, node * 2, start, (start + end) / 2, left, right);
	long long rsum = queryMax(minTree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	return max(lsum, rsum);
}

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
	long long lsum = queryMin(minTree, node * 2, start, (start + end) / 2, left, right);
	long long rsum = queryMin(minTree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	return min(lsum, rsum);
}

int main() {
	fastio;
	int n, m;
	cin >> n >> m;
	vector<long long> v(n);
	int h = (int)ceil(log2(n));
	int treeSize = (1 << (h + 1));

	vector<long long> maxTree(treeSize);
	fill(maxTree.begin(), maxTree.end(), -1);

	vector<long long> minTree(treeSize);
	fill(minTree.begin(), minTree.end(), 0xffffffff);

	for (int i = 0; i < n; i++) cin >> v[i];
	initMin(v, minTree, 1, 0, n - 1);
	initMax(v, maxTree, 1, 0, n - 1);
	while (m--) {
		int l, r; cin >> l >> r;
		cout << queryMin(minTree, 1, 0, n - 1, l - 1, r - 1) << ' ';
		cout << queryMax(maxTree, 1, 0, n - 1, l - 1, r - 1) << '\n';
	}
}
