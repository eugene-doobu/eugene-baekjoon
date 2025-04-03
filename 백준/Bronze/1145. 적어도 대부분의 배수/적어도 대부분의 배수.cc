#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
int main() {
	int arr[5] = {};
	int mn = -1, cnt;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (mn == -1 || mn > arr[i]) mn = arr[i];
	}

	while (cnt < 3) {
		mn++;
		cnt = 0;
		for (int i = 0; i < 5; ++i) {
			if (mn % arr[i] == 0) cnt++;
		}
	}
	cout << mn;
}