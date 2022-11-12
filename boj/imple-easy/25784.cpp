#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> q(3); for (int i = 0; i < 3; ++i) cin >> q[i];
	sort(q.begin(), q.end());
	if (q[2] == q[0] + q[1]) cout << 1;
	else if (q[2] == q[0] * q[1]) cout << 2;
	else cout << 3;
}