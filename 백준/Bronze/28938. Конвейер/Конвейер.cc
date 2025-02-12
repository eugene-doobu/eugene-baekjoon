#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	int n; cin >> n; vector<int> v(n); for (int i = 0; i < n; ++i) cin >> v[i];
	int r = accumulate(v.begin(), v.end(), 0);
	cout << (r < 0 ? "Left" : (r == 0 ? "Stay" : "Right"));
}