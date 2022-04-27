class Solution {
    int dp[47];
public:
    int climbStairs(int n) {
        dp[1] = 1; dp[2] = 2;
        for (int i = 3; i <= n; ++i)
            dp[i] = dp[i - 2] + dp[i - 1];
        return dp[n];
    }
};