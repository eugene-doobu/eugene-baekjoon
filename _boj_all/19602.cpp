#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

int main() {
	fastio;
	int happy = 10, s, m, l;
	cin >> s >> m >> l;
	int mood = s + 2 * m + 3 * l;
	cout << (mood >= happy ? "happy" : "sad");
}