#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
string s, r;
int m, n;
int main() {
	fastio; 
	for (int i = 0; i < 7; i++)
	{
		cin >> s >> m;
		if (n < m)
		{
			n = m; r = s;
		}
	}
	cout << r;
}