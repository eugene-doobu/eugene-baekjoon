#include<bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int rst[1000005];

int main(void) {
    fastio;
    stack<pair<int, int>> stk;
    long n; cin >> n;
    for (int i = 0; i < n; ++i) {
        rst[i] = -1;
        long tmp; cin >> tmp;
        while (!stk.empty() && stk.top().first < tmp) {
            rst[stk.top().second] = tmp; stk.pop();
        }
        stk.push({ tmp, i });
    }
    for (int i = 0; i < n; ++i)
        cout << rst[i] << ' ';
}
