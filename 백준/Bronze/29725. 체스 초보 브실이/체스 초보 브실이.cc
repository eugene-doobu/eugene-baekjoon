#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	fastio; int z=0;
	for (int i=0; i<8; ++i)
	{
		string s; cin >> s;
		for (int j=0; j<8; ++j)
		{
			if (s[j] == 'p') z -= 1;
			if (s[j] == 'P') z += 1;
			if (s[j] == 'n') z -= 3;
			if (s[j] == 'N') z += 3;
			if (s[j] == 'b') z -= 3;
			if (s[j] == 'B') z += 3;
			if (s[j] == 'r') z -= 5;
			if (s[j] == 'R') z += 5;
			if (s[j] == 'q') z -= 9;
			if (s[j] == 'Q') z += 9;
		}
	}
	cout << z;
}