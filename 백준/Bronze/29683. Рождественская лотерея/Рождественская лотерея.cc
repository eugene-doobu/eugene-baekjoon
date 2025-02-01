#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; int n, v, t=0, z; cin >> n >> v;
	while (n--)
	{
		cin >> z; t += z / v;
	}
	cout << t;
}