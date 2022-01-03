#include <bits/stdc++.h>
#include <unordered_map>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, q; cin >> n; unordered_map<int, bitset<2000>> ib;
	for (int i = 1; i <= n; ++i) { string s; cin >> s; bitset<2000> b(s); ib[i] = b; };
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int a, b; cin >> a >> b;
		cout << (ib[a] & ib[b]).count() << "\n";
	}
}