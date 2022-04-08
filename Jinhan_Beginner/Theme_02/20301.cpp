#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
	fastio;
	int n, k, m, weight = 1, cnt = 0, rcnt=0; cin >> n >> k >> m;
	deque<int> dq; for (int i = 1; i <= n; i++) dq.push_back(i);
	while(!dq.empty()){
		++cnt; 
		if (weight == 1) {
			int tmp = dq[0]; dq.pop_front();
			if (cnt >= k) {
				cout << tmp << " ";
				cnt = 0; ++rcnt;
			}
			else  dq.push_back(tmp);
		}
		else {
			int tmp = dq[dq.size()-1]; dq.pop_back();
			if (cnt >= k) {
				cout << tmp << " ";
				cnt = 0; ++rcnt;
			}
			else  dq.push_front(tmp);
		}

		if (rcnt >= m) {
			weight *= -1;
			rcnt = 0;
		}
	}
}