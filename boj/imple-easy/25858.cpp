#include <bits/stdc++.h>
using namespace std;
int n, m, s, w;
int main() {
	int n, m; cin >> n >> m;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		s += v[i];
	} w = m / s;
	for (int i = 0; i < n; ++i) {
		cout << w * v[i] << "\n";
	}
}