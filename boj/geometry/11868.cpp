#include<bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int main()
{
	fastio;
	int n; cin >> n;
	long long grd = 0;
	for (int i = 0; i < n; ++i) {
		long long j; cin >> j;
		grd ^= j;
	}
	if (grd) cout << "koosaga";
	else cout << "cubelover";
}