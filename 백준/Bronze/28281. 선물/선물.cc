#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; long a, b, c, d = 0, r = 2001; cin >> a >> b >> d; a--;
	while (a--)
	{
		cin >> c;
		r = min(r, c + d);
		d = c;
	}
	cout << r * b;
}