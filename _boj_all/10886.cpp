#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, a = 0, b = 0; cin >> n;
	while (n--) {
		int q; cin >> q;
		if (q) a++; else b++;
	}
	if (a > b) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
}