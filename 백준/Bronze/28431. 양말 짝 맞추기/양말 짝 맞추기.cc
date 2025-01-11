#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int c[10];
int main() {
    fastio;
	for (int t = 0; t < 5; t++) {int x; cin >> x; c[x]++;}
	for (int i = 0; i < 10; i++) {if (c[i] & 1) cout << i;}
}