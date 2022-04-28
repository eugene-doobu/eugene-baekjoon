N, A, rst = int(input()), sorted(list(map(int, input().split()))), 0
for i in A:
  if i <= rst + 1: rst += i
  else: break
print(rst+1)