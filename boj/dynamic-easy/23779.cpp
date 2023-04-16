#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

#define IMPOSSIBLE 0x7f7f7f7f

long long dp[213];
bool isPrime[212];

void IsPrime(int n) {
	for (int i = 0; i <= n; i++)
		isPrime[i] = true;

	for (int i = 2; i <= n; i++)
		if (isPrime[i])
			for (int j = i * 2; j <= n; j += i)
				isPrime[j] = false;
}

int main() {
	fastio;
	IsPrime(211);
	int p; cin >> p; dp[2] = 1;
	for (int i = 2; i <= p; ++i) {
		if (!isPrime[i]) continue;
		for (int j = 1; j <= 14; ++j) {
			if (!isPrime[i+j]) continue;
			dp[i + j] += dp[i];
		}
	}
	cout << dp[p];
}
