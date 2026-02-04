#define fastio cin.tie(0)->sync_with_stdio(0)
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

long long lcm(long long a, long long b)
{
	return a / gcd(a, b) * b;
}

int main() {
    fastio;
	int t; cin >> t;

	while (t--)
	{
		long long a, b; cin >> a >> b;
		cout << lcm(a, b) << "\n";
	}
}