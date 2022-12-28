#include <bits/stdc++.h>
using namespace std;
int main() {
	while (true) {
		int a, b = 0;
		cin >> a;
		if (a == 0) return 0;
		while (a) {
			b += a;
			a--;
		}
		cout << b << "\n";
	}
    return 0;
}