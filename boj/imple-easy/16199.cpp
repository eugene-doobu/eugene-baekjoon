#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
	int y1, m1, d1; cin >> y1 >> m1 >> d1;
	int y2, m2, d2; cin >> y2 >> m2 >> d2;
	if (m1 < m2) a = y2 - y1;
	else if (m1 == m2) {
		a = y2 - y1;
		if (d1 > d2) a -= 1;
	}
	else a = y2 - y1 - 1;
	cout << a << "\n" << y2 - y1 + 1 << "\n" << y2 - y1;
}