#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	int a, b, s; cin >> a >> b;
	if (a > 10) s = 24 - a + b;
	else s = b - a;
	cout << s;
}