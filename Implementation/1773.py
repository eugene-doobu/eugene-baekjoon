num, limit = map(int, input().split())
bang = set()
for i in range(num):
  period = int(input())
  for j in range(1, limit+1):
    if j % period == 0 :
      bang.add(j)

print(len(bang))
