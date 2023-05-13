#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio; int n; cin >> n; vector<int> v(n), q; for (int i = 0; i < n; ++i) cin >> v[i]; q = v;
	sort(v.begin(), v.end());
	for (auto val : q) cout << ((find(v.begin(), v.end(), val) - v.begin()) + 1) << "\n";
}

