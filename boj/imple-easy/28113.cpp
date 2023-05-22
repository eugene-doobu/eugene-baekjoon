#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int main() {
	fastio; 
	int n, a, b; cin >> n >> a >> b;
	int r = n + a;
	if (a < b && a < r) cout << "Bus"; 
	else if (a > b && b < r) cout << "Subway";
	else cout << "Anything";
}

