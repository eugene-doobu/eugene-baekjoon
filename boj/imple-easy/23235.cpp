#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
	fastio;
	string s; int n = 1;
	while (true) {
		getline(cin, s);
		if (s == "0") return 0;
		cout << "Case " << n++ <<": Sorting... done!\n";
	}
}
