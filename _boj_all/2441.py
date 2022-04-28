q = int(input())

for i in range(0, q):
  for j in range(0, i):
    print(' ', end='')
  for j in range(i, q):
    print('*', end='')
  print('')