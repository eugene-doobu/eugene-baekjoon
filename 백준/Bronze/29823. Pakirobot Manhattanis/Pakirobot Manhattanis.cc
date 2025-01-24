#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; int n, a = 0, b = 0; string s; cin >> n >> s;
	for (char c : s)
	{
		if (c == 'N') a--;
		if (c == 'S') a++;
		if (c == 'E') b--;
		if (c == 'W') b++;
	}
	cout << abs(a) + abs(b);
}