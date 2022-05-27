#include<bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

struct Point {
	int x, y;
	int p, q;
	Point() : Point(0, 0, 1, 0) {}
	Point(int x1, int y1) : Point(x1, y1, 1, 0) {}
	Point(int x1, int y1, int p1, int q1) : x(x1), y(y1), p(p1), q(q1) {}

	bool operator <(const Point& o) {
		if (1LL * q * o.p != 1LL * p * o.q) return 1LL * q * o.p < 1LL * p * o.q;
		if (y != o.y) return y < o.y;
		return x < o.x;
	}

	Point operator -(const Point& o) {
		return Point(x - o.x, y - o.y, p - o.p, q - o.q);
	}
};

long long ccw(const Point& a, const Point& b, const Point& c) {
	return 1LL * (b.x - a.x) * (c.y - a.y) - 1LL * (b.y - a.y) * (c.x - a.x);
}

double Dot(Point a, Point b) {
	return a.x * b.x + a.y * b.y;
}

long long Outer(Point a, Point b) {
	return a.x * b.y - a.y * b.x;
}

double Dist(Point a, Point b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

vector<Point> ConvexHull(Point p[], int N) {
	stack<int> S;
	vector<Point> ch;
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
	while (!S.empty()) {
		int idx = S.top(); S.pop();
		ch.push_back({ p[idx].x , p[idx].y });
	}
	return ch;
}
Point p[10005];

int main(void) {
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

	long long ans = 0;
	auto convex = ConvexHull(p, N);
	N = convex.size();
	for (int i = 1; i < N - 1; ++i) {
		Point a = Point(convex[i].x - convex[0].x, convex[i].y - convex[0].y);
		Point b = Point(convex[i+1].x - convex[0].x, convex[i+1].y - convex[0].y);
		long long qq = Outer(a, b) / 2;
		ans += qq;
	}

	cout << abs(ans / 50);
}
