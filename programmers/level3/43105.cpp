#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
using pii = pair<int, int>;
int dp[502][502];

int solution(vector<vector<int>> triangle) {
    int N = triangle.size();
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i - 1][j - 1];
        }
    }
    return *max_element(dp[N], dp[N]+N-1);
}