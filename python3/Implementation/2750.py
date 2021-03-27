numN = int(input())
numlist = []

for i in range(numN):
  numlist.append(int(input()))

numlist.sort()

for j in numlist:
  print(j)
