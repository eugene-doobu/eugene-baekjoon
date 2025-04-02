#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; int a; double w, v; cin >> a >> w >> v;
	cout << (w / v >= a ? 1 : 0);
}
