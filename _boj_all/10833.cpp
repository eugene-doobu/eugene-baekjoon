#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, s=0; cin >> n;
	while (n--) {
		int a, b; cin >> a >> b;
		s += b - a * (b / a);
	}
	cout << s;
}