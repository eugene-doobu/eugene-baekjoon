#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	auto Cmp = [](const int& a, const int& b) { return a > b; };
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int m; cin >> m;
		cout << m / 2 + 1 << "\n";
		priority_queue<int, vector<int>, decltype(Cmp)> PQ(Cmp);
		for (int j = 0; j < m; j++) {
			int val; cin >> val;
			PQ.push(val);
			if (j % 2 == 0) {
				auto tmpPQ = PQ; int popNum = j / 2;
				for (int k = 0; k < popNum; k++) tmpPQ.pop();
				cout << tmpPQ.top() << " ";
			}
		}
		cout << "\n";
	}
}