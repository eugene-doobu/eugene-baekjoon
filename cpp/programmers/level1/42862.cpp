#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> v(n + 1, 1); v[0] = 0;
    for (auto _lst : lost   ) v[_lst] = 0;
    for (auto _rsv : reserve) v[_rsv] += 1;
    for (int i = 1; i <= n; ++i) {
        if (v[i] == 0) {
            if (v[i - 1] == 2) {
                v[i - 1] = 1;
                v[i] = 1;
                continue;
            }
            else if (i != n && v[i + 1] == 2) {
                v[i + 1] = 1;
                v[i] = 1;
                continue;
            }
        }
    }
    int rst = 0;
    for (auto val : v) if (val) rst++;
    return rst;
}