#include <bits/stdc++.h>
#include <unordered_map>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	int n; cin >> n; set<string> book;
	for (int i = 0; i < n; i++) {
		string name, act; cin >> name >> act;
		if (act == "enter") book.insert(name);
		else book.erase(name);
	}
	for (auto i = book.rbegin(); i != book.rend(); ++i) cout << *i << "\n";
}