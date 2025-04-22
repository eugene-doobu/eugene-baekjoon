#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
    fastio; int x; string s; cin >> x >> s;
	if (s == "miss") cout << x * 0;
	if (s == "bad") cout << x * 200;
	if (s == "cool") cout << x * 400;
	if (s == "great") cout << x * 600;
	if (s == "perfect") cout << x * 1000;
}