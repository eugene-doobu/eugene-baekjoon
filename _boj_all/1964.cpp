#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

long dp[10000001];

int main() {
	int n;
	scanf("%d", &n);
	dp[0] = 1;
	dp[1] = 5;
	for (int i = 1; i <= n; i++) {
		dp[i + 1] = dp[i] + dp[i] - dp[i-1] + 3;
	}
	printf("%d", dp[n] % 45678);
}

