#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

char Map[50][50];

int main() {
	fastio;
	int n; cin >> n; deque<int> dq(n); for (int i = 1; i <= n; ++i) dq[i - 1] = i;
	while (dq.size() > 1) {
		dq.pop_front();  int tmp = dq[0];
		dq.pop_front();  dq.push_back(tmp);
	}
	cout << dq[0];
}