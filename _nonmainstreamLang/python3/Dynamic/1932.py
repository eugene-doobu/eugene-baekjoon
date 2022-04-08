N = int(input())
tri = [[0 for _ in range(N+1)] for _ in range(N+1)]
dp = [[0 for _ in range(N+1)] for _ in range(N+1)]

for i in range(1, N+1):
    tmp = list(map(int, input().split()))
    for j in range(1, i+1):
        tri[i][j] = tmp[j-1]

for i in range(1, N+1):
    for j in range(1, i+1):
        dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + tri[i][j]
print(max(dp[N]))