#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		string left, right; cin >> left >> right;
		vector<char> leftVec, rightVec;
		for (char c : left ) leftVec.push_back(c);
		for (char c : right) rightVec.push_back(c);
		sort(leftVec.begin(), leftVec.end()); sort(rightVec.begin(), rightVec.end());
		if (leftVec == rightVec) cout << "Possible" << "\n";
		else cout << "Impossible" << "\n";
	}
}