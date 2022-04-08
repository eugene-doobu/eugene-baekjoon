#include <bits/stdc++.h>
#include <unordered_map>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

unordered_map<long, long> mm; long p, q, x, y;

long Getmm(long n) {
	if (n <= 0) return 1;
	if (mm.count(n)) return mm[n];
	else return mm[n] = Getmm((n / p) - x) + Getmm((n / q) - y);
}

int main() {
	fastio;
	long n; cin >> n >> p >> q >> x >> y; mm[0] = 1;
	cout << Getmm(n);
}