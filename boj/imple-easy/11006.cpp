#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio; 
	int n; cin >> n;
	while (n--) {
		int a, b; cin >> a >> b;
		int c = (b * 2) - a;
		cout << c << ' ' << b - c << "\n";
	}
}

