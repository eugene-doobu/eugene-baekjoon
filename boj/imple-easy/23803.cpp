#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 0; i < (5 - 1) * n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << "@";
		cout << "\n";
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 5 * n; ++j)
			cout << "@";
		cout << "\n";
	}
}