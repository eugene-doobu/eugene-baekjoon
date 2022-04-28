dp = [1] * 91

def yeechin(num):
    if num == 1:
        return 1
    if num == 2:
        return 1
    if dp[num] != 1:
        return dp[num]
    dp[num] = yeechin(num-1) + yeechin(num-2)
    return dp[num]

# main
n = int(input())

yeechin(n)
print(dp[n])