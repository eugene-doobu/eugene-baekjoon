#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

struct Info { string s; int val; };

int main() {
	fastio;
	int n, cnt[10'001]{}; cin >> n >> n;
	vector<Info> v(n);
	for (auto& q : v) cin >> q.s >> q.val, cnt[q.val]++;

	auto it = min_element(v.begin(), v.end(), [&](Info& a, Info& b) {
		if (cnt[a.val] != cnt[b.val]) return cnt[a.val] < cnt[b.val];
		return a.val < b.val;
		});

	cout << it->s << ' ' << it->val << '\n';
}