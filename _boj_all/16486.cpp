#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

const double pi = 3.141592;

int main() {
	fastio;
	double rst = 0;
	double d1, d2; cin >> d1 >> d2;
	rst += 2 * d1;
	rst += 2 * pi * d2;
	cout.precision(10);
	cout << rst;
}