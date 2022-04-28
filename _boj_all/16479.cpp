#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
	fastio;
	double a, b, c; cin >> a >> b >> c;
	double tmp = (b - c) / 2;
	cout.precision(7);
	cout << a * a - tmp * tmp;
}