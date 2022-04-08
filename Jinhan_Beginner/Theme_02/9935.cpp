#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string a, b; cin >> a >> b;
	string S;
	for (const auto& i : a) {
		S.push_back(i);
		while (S.size() >= b.size() && S.substr(S.size() - b.size(), b.size()) == b)
			for (int j = 0; j < b.size(); j++) S.pop_back();
	}
	cout << (S.empty() ? "FRULA" : S) << "\n";
}