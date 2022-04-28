#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, m; cin >> n >> m;
	if (m == 1 || m == 2) cout << "NEWBIE!";
	else if (m <= n) cout << "OLDBIE!";
	else cout << "TLE!";
}