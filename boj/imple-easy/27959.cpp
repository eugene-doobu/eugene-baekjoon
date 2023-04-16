#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

int dp[201][301];

int main() {
	fastio;
	int n, m; cin >> n >> m;
	if (n * 100 >= m) cout << "Yes";
	else cout << "No";
}
