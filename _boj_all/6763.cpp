#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int a, b; cin >> a >> b;
	int c = b - a;
	if (c< 1) cout << "Congratulations, you are within the speed limit!";
	else if (c < 21) cout << "You are speeding and your fine is $100.";
	else if (c < 31) cout << "You are speeding and your fine is $270.";
	else cout << "You are speeding and your fine is $500.";
}