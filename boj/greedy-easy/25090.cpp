#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;

int main() {
    fastio;
    int T; cin >> T;
    for (int t =1; t <= T; ++t) {
        int N; cin >> N; vector<int> v(N);
        int rst = 0;
        for (int i = 0; i < N; ++i) cin >> v[i];
        sort(v.begin(), v.end());
        cout << "Case #" << t << ": ";
        for (int i = 1; i <= N; ++i)
            if (v[i-1] >= rst+1) rst++;
        cout << rst << "\n";
    }
}
