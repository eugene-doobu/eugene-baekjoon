#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, width = 2; cin >> n;
	for (int i = 0; i < n; ++i) width = width + width -1;
	cout << width * width;
}