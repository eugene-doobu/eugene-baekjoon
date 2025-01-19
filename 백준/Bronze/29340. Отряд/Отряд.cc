#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; string a, b; cin >> a >> b;
	for (int i=0; i<a.length(); ++i)
		cout << max(a[i], b[i]);
}