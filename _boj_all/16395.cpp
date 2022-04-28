#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int dp[31][31];

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i) dp[i][j] = 1;
			else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}
	printf("%d", dp[n][k]);
}

