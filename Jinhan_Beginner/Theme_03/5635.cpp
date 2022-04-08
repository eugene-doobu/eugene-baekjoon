#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	int n; cin >> n; vector<tuple<int, int, int, string>> p;
	for (int i = 0; i < n; i++) 
	{
		string _n; int _d, _m, _y; cin >> _n >> _d >> _m >> _y;
		p.push_back({ _y, _m, _d, _n });
	}
	sort(p.begin(), p.end());
	cout << get<3>(p[n - 1]) << "\n" << get<3>(p[0]) << "\n";
}