#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio; int n, v; cin >> n;
	for (int i=1; i<=n; ++i)
	{
		cin >> v;
		cout << "Case #" << i << ": ";
		if (v > 4500) cout << "Round 1\n";
		else if (v > 1000) cout << "Round 2\n";
		else if (v > 25) cout << "Round 3\n";
		else cout << "World Finals\n";
	}
}