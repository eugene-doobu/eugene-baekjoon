#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; string a, b; cin >> a >> b;
	int n = abs(a[0] - b[0]);
	int m = abs(a[1] - b[1]);
	cout << min(n, m) << ' ' << max(n, m);
}