#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, v, rst = 0; vector<int> values;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		values.push_back(tmp);
	}
	cin >> v;
	for (auto val : values) if (v == val) ++rst;
	cout << rst;
}