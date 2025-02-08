#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

long dp[1516];
int main() {
	fastio; int n, a = 0; cin >> n;
	for (int i = 1; i <= n; ++i) a += i;
	cout << a << "\n" << a * a << "\n" << a * a;
}