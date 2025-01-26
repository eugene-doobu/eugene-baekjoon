#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; int a, b; cin >> a >> b;
	b += a;
	b *= a;
	b += a;
	b *= a;
	cout << b;
}