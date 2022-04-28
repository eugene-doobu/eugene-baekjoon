MAX = 100001
t = int(input())

for _ in range(t):
  n = int(input())
  val = []
  dp = [[0 for _ in range(3)] for _ in range(MAX)]
  
  # init
  for idx in range(2):
    inVal = list(map(int, input().split()))
    val.append(inVal)
  
  # dp
  for i in range(n):
    # 안떼는 경우 이전 값들중 가장 큰 수
    dp[i+1][0] = max(dp[i+1][0], max(dp[i][1], dp[i][2]))
    # 위쪽꺼 떼는 경우
    dp[i+1][1] = max(dp[i+1][1], max(dp[i][0], dp[i][2]) + val[0][i])
    # 아래쪽꺼 떼는 경우
    dp[i+1][2] = max(dp[i+1][2], max(dp[i][0], dp[i][1]) + val[1][i])
  print(max(dp[n][0], dp[n][1], dp[n][2]))

