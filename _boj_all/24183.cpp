#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
	fastio;
	int a, b, c; cin >> a >> b >> c;
	cout << fixed;
	cout.precision(6);
	cout << (229 * 324 * 2 * a + 297 * 420 * 2 * b + 210 * 297 * c) * 0.000001;
}