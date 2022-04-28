#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int j = 0; j < n; j++) {
		int val;
		cin >> val;
		pq.push(val);
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int val;
			cin >> val;
			pq.push(val);
		}

		for (int j = 0; j < n; j++) {
			pq.pop();
		}
	}
	printf("%d", pq.top());
	return 0;
}