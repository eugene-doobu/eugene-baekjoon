f = [0 for _ in range(91)]

def Fibo(n):
  if n == 0: return 0
  if n == 1: return 1
  if f[n] != 0:
    return f[n]
  f[n] = Fibo(n-1) + Fibo(n-2)
  return f[n]

print(Fibo(int(input())))