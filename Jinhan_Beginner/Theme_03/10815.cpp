#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n; cin >> n; vector<int> a; for (int i = 0; i < n; ++i) { int tmp; cin >> tmp; a.push_back(tmp); }
	sort(a.begin(), a.end());
	cin >> n; for (int i = 0; i < n; ++i) { 
		int tmp; cin >> tmp; 
		cout << (binary_search(a.begin(), a.end(), tmp) ? 1 : 0) << ' ';
	}
}