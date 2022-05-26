#include<bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main(void) {
	fastio;
	int n, q; cin >> n >> q;
	vector<int> p(n + 1), a(q + 1), b(q + 1);
	for (int i = 1; i <= n; i++) p[i] = i;
	for (int i = 1; i <= q; i++) cin >> a[i] >> b[i];
	for (int i = q; i >= 1; i--) p[a[i]] = p[b[i]];
	for (int i = 1; i <= n; i++) cout << p[i] << ' ';
	cout << '\n';
}
