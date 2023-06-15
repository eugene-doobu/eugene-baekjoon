#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio;
	int p, q; cin >> p >> q;
	vector<int> pp, qq;
	for (int i = 1; i <= p; i++) if (p % i == 0) pp.push_back(i);
	for (int i = 1; i <= q; i++) if (q % i == 0) qq.push_back(i);
	for (auto pf : pp)
		for (auto qf : qq)
			cout << pf << ' ' << qf << '\n';
}

