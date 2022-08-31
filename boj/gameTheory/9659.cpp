#include<bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int main()
{
	fastio;
	long long n; cin >> n;
	cout << (n % 2 == 0 ? "CY" : "SK");
}