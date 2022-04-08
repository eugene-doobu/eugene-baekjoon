#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int d[100001];

int main() {
	fastio;
	int n, m; cin >> n >> m;
	d[0] = 0;
	for (int i = 1; i <= n; i++) {
		int tmp; cin >> tmp;
		d[i] = d[i - 1] + tmp;
	}
	for(int i=0; i<m; ++i){
		int a, b; cin >> a >> b;
		cout << d[b] - d[a - 1] << '\n';
	}
}