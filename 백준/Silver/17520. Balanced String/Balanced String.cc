#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; int n, val=1; cin >> n;
	for (int i = 1; i <= n; i+=2) {
		val *= 2;
		val %= 16769023;
	}
	cout << val;
}