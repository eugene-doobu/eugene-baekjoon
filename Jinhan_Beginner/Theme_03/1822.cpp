#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, m; cin >> n >> m; 
	vector<int> a; for (int i = 0; i < n; ++i) { int tmp; cin >> tmp; a.push_back(tmp); }
	vector<int> b; for (int i = 0; i < m; ++i) { int tmp; cin >> tmp; b.push_back(tmp); }
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int cnt=0; vector<int> rst;
	for (int num : a) {
		if (!binary_search(b.begin(), b.end(), num)) { ++cnt; rst.push_back(num); }
	}
	cout << cnt << "\n";
	if (cnt > 0) {
		for (int num : rst) {
			cout << num << " ";
		}
	}
}