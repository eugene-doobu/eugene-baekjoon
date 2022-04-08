#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, k, top=1, bot=1; cin >> n >> k;
	for (int i = 0; i < k; ++i) {
		top *= (n-i); bot *= (i+1);
	}
	cout << top / bot;
}