#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
char mat[30][30] = { ' ' ,};

void rot90(int& r, int& c) {
	char tmpMat[30][30] = { ' ' , };
	for (int x = 0; x < r; ++x) {
		for (int y = 0; y < c; ++y) {
			tmpMat[y][r - 1 - x] = mat[x][y];
		}
	}
	int tmp = r;
	r = c;
	c = tmp;
	for (int x = 0; x < r; ++x) {
		for (int y = 0; y < c; ++y) {
			mat[x][y] = tmpMat[x][y];
		}
	}
}

void rot45(int r, int c) {
	char tmpMat[30][30] = { 0, };
	for (int x = 0; x <  r; ++x) {
		for (int y = 0; y < c; ++y) {
			tmpMat[x + y][y + r - x -1] = mat[x][y];
		}
	}
	for (int x = 0; x < r+c-1; ++x) {
		string s;
		for (int y = 0; y < r + c-1; ++y) {
			s += ((tmpMat[x][y] != 0) ? tmpMat[x][y] : ' ');
		}
		s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
			return !std::isspace(ch);
			}).base(), s.end());
		cout << s;
		cout << "\n";
	}
}

int main() {
	fastio;
	int r, c, rot; cin >> r >> c;
	for (int x = 0; x < r; ++x) {
		string tmp; cin >> tmp;
		for (int y = 0; y < c; ++y) {
			mat[x][y] = tmp[y];
		}
	}
	cin >> rot;
	while (rot >= 90) {
		rot90(r, c);
		rot -= 90;
	}
	if(rot >= 45) rot45(r, c);
	else {
		for (int x = 0; x < r; ++x) {
			for (int y = 0; y < c; ++y) {
				cout << ((mat[x][y] != 0) ? mat[x][y] : ' ');
			}
			cout << '\n';
		}
	}
}