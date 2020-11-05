def plusfunc(_n):
  if _n == 1: return 1
  if _n == 2: return 2
  if _n == 3: return 4
  return plusfunc(_n-1) + plusfunc(_n-2) + plusfunc(_n-3)

t = int(input())
for _ in range(t):
  n = int(input())
  print(plusfunc(n))
