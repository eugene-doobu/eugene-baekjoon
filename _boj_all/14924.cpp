#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int a, b, c; cin >> a >> b >> c;
	cout << (c / (a * 2)) * b;
}