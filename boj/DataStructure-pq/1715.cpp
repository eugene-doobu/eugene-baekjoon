#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	priority_queue<
		int,
		vector<int>,
		greater<int>
	> pq;

	int n, rst = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int data; cin >> data;
		pq.push(data);
	}

	for (int i = 0; i < n - 1; i++) {
		int sum = pq.top();
		pq.pop();
		sum += pq.top();
		pq.pop();
		pq.push(sum);
		rst += sum;
	}
	printf("%d", rst);
	return 0;
}

