#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	vector<int> v(3);
	for (int i = 0; i < 3; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	if (v[2] == v[1] && v[0] == v[2]) cout << '2';
	else if(v[2] * v[2] == v[1] * v[1] + v[0] * v[0])cout << '1';
	else cout << '0';
}