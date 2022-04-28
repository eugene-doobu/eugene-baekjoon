#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

struct Point {
	int x, y; // 실제 위치
	int p, q; // 상대 위치
	Point() : Point(0, 0, 1, 0) {}
	Point(int x1, int y1) : Point(x1, y1, 1, 0) {}
	Point(int x1, int y1, int p1, int q1) : x(x1), y(y1), p(p1), q(q1) {}

	bool operator <(const Point& O) {
		if (1LL * q * O.p != 1LL * p * O.q) return 1LL * q * O.p < 1LL * p * O.q;
		if (y != O.y) return y < O.y;
		return x < O.x;
	}
};
Point p[100000];

long long ccw(const Point& A, const Point& B, const Point& C) {
	return 1LL * (B.x - A.x) * (C.y - A.y) - 1LL * (B.y - A.y) * (C.x - A.x);
}

int main() {
	fastio;
	int N; cin >> N;
	for (int i = 0; i < N; ++i) {
		int x, y; cin >> x >> y;
		p[i] = Point(x, y);
	}
	sort(p, p + N);

	for (int i = 1; i < N; ++i) {
		p[i].p = p[i].x - p[0].x;
		p[i].q = p[i].y - p[0].y;
	}
	sort(p + 1, p + N);

	stack<int> S;
	S.push(0); S.push(1);
	int next = 2;
	while (next < N) {
		while (S.size() >= 2) {
			int first, second;
			second = S.top(); S.pop();
			first = S.top();
			if (ccw(p[first], p[second], p[next]) > 0) {
				S.push(second);
				break;
			}
		}
		S.push(next++);
	}
	cout << S.size();
}