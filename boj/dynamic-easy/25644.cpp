#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long mx, rst;
long long  vals[200001];
int main() {
	fastio;
	int n; cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> vals[i];
	mx = vals[n];
	for (int i = 1; i <= n - 1; ++i)
	{
		rst = max(rst, mx - vals[n - i]);
		mx = max(mx, vals[n - i]);
	}
	cout << rst;
}
