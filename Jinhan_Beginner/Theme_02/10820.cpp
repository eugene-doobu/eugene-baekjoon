#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio; string str;
	while(getline(cin, str)) {
		int low = 0, upp = 0, num = 0, space = 0;
		for (char c : str) {
			if (isupper(c)) ++upp;
			else if (islower(c)) ++low;
			else if (isalnum(c)) ++num;
			else ++space;
		}
		cout << low <<" " << upp << " " << num << " " << space << "\n";
	}
}