n = int(input())
q = list(input() for _ in range(n))

for i in q:
  tmp = i.split(",")
  print(int(tmp[0]) + int(tmp[1]))