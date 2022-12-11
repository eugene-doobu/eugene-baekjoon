#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	double q = 0;
	int t; cin >> t;
	while (t--) {
		int a; cin >> a;
		q = 100 - ((double)(100 - q) / 100) * ((double)(100 - a) / 100) * 100;
		cout << setprecision(10) << q << "\n";
	}
}