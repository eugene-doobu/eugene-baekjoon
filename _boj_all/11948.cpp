#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int s = 0;
	vector<int> a(4), b(2);
	for (int i = 0; i < 4; ++i) cin >> a[i];
	for (int i = 0; i < 2; ++i) cin >> b[i];
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	for (int i = 0; i < 3; ++i) s += a[i];
	cout << s + b[0];
}