#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
using ll = long long;
int main() {
	fastio; ll w = 604800, n, v =1; cin >> n;
	for (int i=2; i<=n; ++i)v *= i;
	cout << v / w;
}