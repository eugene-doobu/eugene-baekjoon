#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	int qqq = 1;
	while (true) {
		int a; cin >> a;
		if (a == 0) return 0;
		bool isOdd = a % 2;
		vector<int> v(a); for (int i = 0; i < a; ++i) cin >> v[i];
		cout << setprecision(1) << fixed;
		if (isOdd) {
			cout << "Case " << qqq << ": " << (double)v[((a + 1) / 2) - 1] << "\n";
		}
		else {
			int z = v[(a / 2) - 1];
			double x = v[(a / 2)];
			cout << "Case " << qqq << ": " << ((z+x)/2) << "\n";
		}
		qqq++;
	}
}
