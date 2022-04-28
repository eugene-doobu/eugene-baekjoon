#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
	fastio;
	int n, cn=1; cin >> n;
	while (n--) {
		vector<int> v(3); cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(), v.end());
		if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2]) cout << "Scenario #" << cn++ << ":\nyes\n\n";
		else cout << "Scenario #" << cn++ << ":\nno\n\n";
	}
}