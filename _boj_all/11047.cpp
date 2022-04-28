#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, k; cin >> n >> k;
	vector<int> v(n); for (int i = 0; i < n; ++i) cin >> v[i];
	sort(v.rbegin(), v.rend());

	int curr = k, cnt = 0;
	for (auto i : v) {
		while (curr >= i){
			curr -= i; cnt++;
		}
		if (curr <= 0) break;
	}
	cout << cnt;
}