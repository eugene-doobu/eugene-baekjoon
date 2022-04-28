dp = [0] * 46
def fibo(n):
    if n==0:
        return 0
    if n==1 or n==2 : 
        return 1
    if dp[n] != 0:
        return dp[n]
    dp[n] = fibo(n-1) + fibo(n-2)
    return dp[n]
print(fibo(int(input())))