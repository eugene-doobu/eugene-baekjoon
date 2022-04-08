class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        dp = {}
        return self.dfs(dp, s1, s2, s3) or self.dfs(dp, s2, s1, s3)

    def dfs(self, dp, s1, s2, s3):
        if len(s3) == 0:
            if len(s1) == len(s2) == 0:
                return True
            return False
        rst = False
        if (s1, s3) in dp: return dp[s1, s3]
        if s1 and s1[0] == s3[0]:
            rst = rst or self.dfs(dp, s1[1:], s2, s3[1:])
        if s2 and s2[0] == s3[0]:
            rst = rst or self.dfs(dp, s1, s2[1:], s3[1:])
        dp[s1[1:], s3[1:]] = rst
        return rst
        
