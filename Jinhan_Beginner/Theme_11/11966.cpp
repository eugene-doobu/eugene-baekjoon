#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int hanoi(int n) {
	for (int i = 0; i <= 30; i++) if (n == (1 << i)) return 1;
	return 0;
}

int main() {
	fastio;
	int n; cin >> n;
	cout << hanoi(n);
}