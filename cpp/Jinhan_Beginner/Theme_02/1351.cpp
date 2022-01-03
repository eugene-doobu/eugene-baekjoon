#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

map<long, long> mm; long p, q;

long Getmm(long n) {
	if (n == 0) return 1;
	if (mm.count(n)) return mm[n];
	else return mm[n] = Getmm(n / p) + Getmm(n / q);
}

int main() {
	fastio;
	long n; cin >> n >> p >> q; mm[0] = 1;
	cout << Getmm(n);
}