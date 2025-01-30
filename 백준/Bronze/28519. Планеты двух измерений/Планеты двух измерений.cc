#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; long n, m; cin >> n >> m;
	if (n > m) swap(n, m);
	cout << min(n + m, n + n + 1);
}