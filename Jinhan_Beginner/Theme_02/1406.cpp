#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	string str; cin >> str;
	int m; cin >> m;
	list<char> lst;
	for (char c : str) lst.push_back(c);
	auto iter = lst.end();
	for (int i = 0; i < m; i++) {
		char c; cin >> c;
		if (c == 'P') {
			char added; cin >> added;
			lst.insert(iter, added);
		}
		else if (c == 'L' && iter != lst.begin()) iter--;
		else if (c == 'D' && iter != lst.end()) iter++;
		else if (c == 'B' && iter != lst.begin()) {
			iter--; iter = lst.erase(iter);
		}
	}
	for (auto i = lst.begin(); i != lst.end(); i++) {
		cout << *i;
	}
}