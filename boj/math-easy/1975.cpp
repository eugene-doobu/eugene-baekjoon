#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

vector<int> factor;

void GetFactor(int a) {
	factor.clear();
	for (int i = 1; i * i <= a; i++) {
		if (i * i == a) {
			factor.push_back(i);
		}
		else if (a % i == 0) {
			factor.push_back(i);
			factor.push_back(a / i);
		}
	}
}

int main() {
	fastio;
	// 1. N보다 큰 진법에서의 갯수를 구할 필요가 없음
	// 2. 약수 구하기

	int T; cin >> T;
	while (T--) {
		int N, rst = 0; cin >> N;
		GetFactor(N);
		for (auto i : factor) {
			if (i == 1) continue;
			int n = N;
			while (n % i == 0) {
				rst++;
				n /= i;
			}
		}
		cout << rst << '\n';
	}
}