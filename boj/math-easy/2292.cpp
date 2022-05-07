#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int a; cin >> a;
	int i = 1, rst = 1, q = 6;
	while (a > i) {
		i += q * rst;
		rst++;
	}
	cout << rst;
}