#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int notheardNum, notseenNum; cin >> notheardNum >> notseenNum;
	set<string> notheard, nhs;
	for (int i = 0; i < notheardNum; ++i) {
		string tmp; cin >> tmp; notheard.insert(tmp);
	}
	for (int i = 0; i < notseenNum; ++i) {
		string tmp; cin >> tmp; if (notheard.count(tmp)) nhs.insert(tmp);
	}
	cout << nhs.size() << "\n";
	for (auto i = nhs.begin(); i != nhs.end(); ++i) {
		cout << *i << "\n";
	}
}