#include <iostream>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int main()
{
	fastio;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n*5; ++j) cout << "@";
		cout << "\n";
	}
	for (int i = 0; i < n * 1; ++i) {
		for (int j = 0; j < n * 1; ++j) cout << "@";
		cout << "\n";
	}
	for (int i = 0; i < n * 1; ++i) {
		for (int j = 0; j < n * 5; ++j) cout << "@";
		cout << "\n";
	}
	for (int i = 0; i < n * 1; ++i) {
		for (int j = 0; j < n * 1; ++j) cout << "@";
		cout << "\n";
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n * 5; ++j) cout << "@";
		cout << "\n";
	}
}