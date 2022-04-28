f = [0 for _ in range(21)]

def Fibo(n):
  if n == 0: return 0
  if n == 1: return 1
  if f[n] != 0:
    return f[n]
  return Fibo(n-1) + Fibo(n-2)

print(Fibo(int(input())))