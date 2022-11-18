#include <bits/stdc++.h>
using namespace std;
int main() {
	int g ,p, t; cin >> g >> p >> t;
	int case1 = g * p;
	int case2 = g + p * t;
	if (case1 == case2) cout << 0;
	else if (case1 > case2) cout << 2;
	else cout << 1;
}