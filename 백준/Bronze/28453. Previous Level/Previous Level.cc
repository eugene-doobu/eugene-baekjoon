#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using ll = long long;
int main() {
	fastio; int t,v; cin >> t;
	while (t--)
	{
		cin >> v;
		if (v == 300) cout << "1 ";
		else if (v >= 275) cout << "2 ";
		else if (v >= 250) cout << "3 ";
		else cout << "4 ";
	}
}