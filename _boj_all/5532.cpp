#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	float l, a, b, c, d; cin >> l >> a >> b >> c >> d;
	cout << l - ceil(max(a / c, b / d));
}